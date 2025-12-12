// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNet___05Fp_msg_nbits_44.h for the primary calling header

#include "VNet___05Fp_msg_nbits_44__pch.h"
#include "VNet___05Fp_msg_nbits_44__Syms.h"
#include "VNet___05Fp_msg_nbits_44___024root.h"

extern const VlWide<128>/*4095:0*/ VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0;
extern const VlWide<128>/*4095:0*/ VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VNet___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0;

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace);
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__val;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__val = 0;
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__rdy;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__410__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__410__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__410__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__410__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__411__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__411__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__411__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__411__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__411__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__411__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__412__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__412__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__412__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__412__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__413__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__413__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__413__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__413__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__413__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__413__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__414__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__414__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__414__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__414__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__415__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__415__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__415__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__415__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__415__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__415__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__416__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__416__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__416__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__416__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__417__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__417__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__417__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__417__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__417__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__417__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_msg
                                              [1U] 
                                              >> 0x2aU))),
                  2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_msg
                                   [1U] >> 0x28U))));
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__str);
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__rdy 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_rdy
        [1U];
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__val 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_val
        [1U];
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))))) {
        Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__rdy) 
         & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__410__str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__410__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__410__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__410__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__410__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__410__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__410__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__410__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__410__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__410__trace);
    } else if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__rdy) 
                & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__val)))) {
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__411__num 
            = Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__411__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__411__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__411__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__411__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__411__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__411__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__411__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__411__trace);
    } else if (((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__rdy)) 
                & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__412__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__412__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__412__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__412__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__412__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__412__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__412__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__412__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__412__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__412__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__413__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__413__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__413__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__413__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__413__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__413__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__413__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__413__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__413__trace);
    } else if ((1U & ((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__rdy)) 
                      & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__val))))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__414__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__414__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__414__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__414__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__414__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__414__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__414__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__414__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__414__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__414__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__415__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__415__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__415__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__415__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__415__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__415__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__415__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__415__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__415__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__416__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__416__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__416__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__416__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__416__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__416__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__416__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__416__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__416__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__416__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__417__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__417__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__417__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__417__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__417__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__417__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__417__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__417__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__417__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace);
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__trace);
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__val;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__val = 0;
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__rdy;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__419__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__419__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__419__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__419__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__420__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__420__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__420__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__420__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__420__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__420__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__421__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__421__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__421__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__421__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__422__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__422__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__422__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__422__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__422__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__422__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__423__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__423__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__423__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__423__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__424__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__424__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__424__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__424__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__424__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__424__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__425__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__425__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__425__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__425__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__426__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__426__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__426__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__426__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__426__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__426__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_msg
                                              [1U] 
                                              >> 0x2aU))),
                  2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_msg
                                   [1U] >> 0x28U))));
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__str);
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__rdy 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_rdy
        [1U];
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__val 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_val
        [1U];
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__trace, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))))))) {
        Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__rdy) 
         & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__419__str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__419__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__419__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__419__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__419__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__419__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__419__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__419__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__419__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__419__trace);
    } else if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__rdy) 
                & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__val)))) {
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__420__num 
            = Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__420__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__420__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__420__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__420__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__420__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__420__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__420__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__420__trace);
    } else if (((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__rdy)) 
                & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__421__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__421__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__421__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__421__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__421__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__421__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__421__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__421__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__421__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__421__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__422__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__422__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__422__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__422__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__422__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__422__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__422__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__422__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__422__trace);
    } else if ((1U & ((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__rdy)) 
                      & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__val))))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__423__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__423__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__423__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__423__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__423__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__423__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__423__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__423__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__423__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__423__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__424__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__424__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__424__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__424__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__424__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__424__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__424__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__424__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__424__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__425__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__425__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__425__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__425__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__425__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__425__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__425__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__425__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__425__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__425__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__426__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__426__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__426__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__426__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__426__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__426__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__426__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__426__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__426__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__418__trace);
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__trace);
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__val;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__val = 0;
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__rdy;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__428__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__428__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__428__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__428__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__429__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__429__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__429__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__429__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__429__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__429__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__430__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__430__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__430__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__430__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__431__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__431__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__431__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__431__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__431__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__431__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__432__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__432__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__432__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__432__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__433__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__433__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__433__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__433__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__433__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__433__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__434__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__434__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__434__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__434__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__435__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__435__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__435__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__435__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__435__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__435__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_msg
                                              [2U] 
                                              >> 0x2aU))),
                  2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_msg
                                   [2U] >> 0x28U))));
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__str);
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__rdy 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_rdy
        [2U];
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__val 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_val
        [2U];
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__trace, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))))) {
        Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__rdy) 
         & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__428__str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__428__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__428__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__428__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__428__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__428__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__428__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__428__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__428__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__428__trace);
    } else if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__rdy) 
                & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__val)))) {
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__429__num 
            = Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__429__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__429__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__429__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__429__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__429__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__429__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__429__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__429__trace);
    } else if (((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__rdy)) 
                & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__430__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__430__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__430__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__430__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__430__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__430__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__430__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__430__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__430__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__430__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__431__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__431__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__431__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__431__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__431__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__431__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__431__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__431__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__431__trace);
    } else if ((1U & ((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__rdy)) 
                      & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__val))))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__432__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__432__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__432__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__432__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__432__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__432__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__432__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__432__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__432__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__432__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__433__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__433__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__433__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__433__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__433__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__433__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__433__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__433__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__433__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__434__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__434__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__434__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__434__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__434__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__434__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__434__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__434__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__434__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__434__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__435__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__435__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__435__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__435__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__435__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__435__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__435__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__435__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__435__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__427__trace);
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__trace);
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__val;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__val = 0;
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__rdy;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__437__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__437__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__437__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__437__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__438__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__438__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__438__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__438__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__438__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__438__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__439__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__439__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__439__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__439__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__440__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__440__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__440__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__440__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__440__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__440__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__441__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__441__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__441__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__441__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__442__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__442__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__442__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__442__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__442__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__442__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__443__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__443__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__443__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__443__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__444__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__444__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__444__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__444__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__444__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__444__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_msg
                                              [2U] 
                                              >> 0x2aU))),
                  2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_msg
                                   [2U] >> 0x28U))));
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__str);
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__rdy 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_rdy
        [2U];
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__val 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_val
        [2U];
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__trace, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))))))) {
        Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__rdy) 
         & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__437__str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__437__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__437__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__437__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__437__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__437__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__437__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__437__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__437__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__437__trace);
    } else if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__rdy) 
                & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__val)))) {
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__438__num 
            = Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__438__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__438__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__438__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__438__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__438__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__438__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__438__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__438__trace);
    } else if (((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__rdy)) 
                & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__439__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__439__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__439__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__439__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__439__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__439__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__439__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__439__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__439__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__439__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__440__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__440__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__440__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__440__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__440__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__440__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__440__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__440__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__440__trace);
    } else if ((1U & ((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__rdy)) 
                      & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__val))))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__441__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__441__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__441__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__441__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__441__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__441__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__441__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__441__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__441__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__441__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__442__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__442__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__442__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__442__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__442__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__442__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__442__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__442__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__442__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__443__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__443__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__443__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__443__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__443__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__443__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__443__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__443__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__443__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__443__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__444__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__444__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__444__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__444__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__444__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__444__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__444__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__444__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__444__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__436__trace);
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__trace);
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__val;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__val = 0;
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__rdy;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__446__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__446__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__446__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__446__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__447__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__447__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__447__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__447__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__447__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__447__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__448__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__448__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__448__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__448__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__449__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__449__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__449__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__449__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__449__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__449__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__450__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__450__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__450__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__450__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__451__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__451__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__451__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__451__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__451__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__451__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__452__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__452__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__452__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__452__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__453__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__453__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__453__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__453__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__453__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__453__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_msg
                                              [3U] 
                                              >> 0x2aU))),
                  2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_msg
                                   [3U] >> 0x28U))));
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__str);
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__rdy 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_rdy
        [3U];
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__val 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_val
        [3U];
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__trace, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))))) {
        Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__rdy) 
         & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__446__str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__446__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__446__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__446__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__446__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__446__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__446__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__446__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__446__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__446__trace);
    } else if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__rdy) 
                & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__val)))) {
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__447__num 
            = Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__447__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__447__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__447__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__447__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__447__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__447__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__447__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__447__trace);
    } else if (((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__rdy)) 
                & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__448__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__448__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__448__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__448__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__448__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__448__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__448__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__448__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__448__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__448__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__449__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__449__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__449__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__449__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__449__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__449__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__449__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__449__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__449__trace);
    } else if ((1U & ((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__rdy)) 
                      & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__val))))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__450__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__450__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__450__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__450__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__450__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__450__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__450__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__450__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__450__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__450__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__451__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__451__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__451__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__451__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__451__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__451__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__451__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__451__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__451__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__452__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__452__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__452__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__452__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__452__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__452__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__452__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__452__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__452__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__452__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__453__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__453__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__453__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__453__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__453__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__453__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__453__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__453__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__453__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__445__trace);
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__trace);
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__val;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__val = 0;
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__rdy;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__455__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__455__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__455__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__455__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__456__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__456__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__456__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__456__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__456__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__456__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__457__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__457__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__457__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__457__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__458__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__458__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__458__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__458__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__458__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__458__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__459__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__459__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__459__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__459__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__460__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__460__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__460__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__460__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__460__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__460__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__461__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__461__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__461__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__461__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__462__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__462__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__462__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__462__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__462__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__462__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_msg
                                              [3U] 
                                              >> 0x2aU))),
                  2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_msg
                                   [3U] >> 0x28U))));
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__str);
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__rdy 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_rdy
        [3U];
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__val 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_val
        [3U];
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__trace, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))))))) {
        Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__rdy) 
         & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__455__str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__455__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__455__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__455__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__455__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__455__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__455__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__455__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__455__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__455__trace);
    } else if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__rdy) 
                & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__val)))) {
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__456__num 
            = Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__456__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__456__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__456__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__456__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__456__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__456__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__456__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__456__trace);
    } else if (((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__rdy)) 
                & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__457__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__457__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__457__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__457__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__457__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__457__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__457__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__457__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__457__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__457__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__458__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__458__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__458__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__458__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__458__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__458__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__458__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__458__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__458__trace);
    } else if ((1U & ((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__rdy)) 
                      & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__val))))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__459__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__459__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__459__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__459__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__459__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__459__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__459__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__459__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__459__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__459__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__460__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__460__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__460__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__460__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__460__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__460__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__460__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__460__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__460__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__461__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__461__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__461__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__461__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__461__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__461__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__461__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__461__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__461__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__461__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__462__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__462__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__462__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__462__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__462__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__462__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__462__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__462__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__462__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__454__trace);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNet___05Fp_msg_nbits_44___024root___dump_triggers__ico(VNet___05Fp_msg_nbits_44___024root* vlSelf);
#endif  // VL_DEBUG

void VNet___05Fp_msg_nbits_44___024root___eval_triggers__ico(VNet___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNet___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
    vlSelf->__VicoTriggered.set(1U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VNet___05Fp_msg_nbits_44___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNet___05Fp_msg_nbits_44___024root___dump_triggers__act(VNet___05Fp_msg_nbits_44___024root* vlSelf);
#endif  // VL_DEBUG

void VNet___05Fp_msg_nbits_44___024root___eval_triggers__act(VNet___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNet___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VNet___05Fp_msg_nbits_44___024root___dump_triggers__act(vlSelf);
    }
#endif
}
