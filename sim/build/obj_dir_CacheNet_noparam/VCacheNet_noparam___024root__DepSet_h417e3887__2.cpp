// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCacheNet_noparam.h for the primary calling header

#include "VCacheNet_noparam__pch.h"
#include "VCacheNet_noparam__Syms.h"
#include "VCacheNet_noparam___024root.h"

extern const VlWide<128>/*4095:0*/ VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0;
extern const VlWide<128>/*4095:0*/ VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VCacheNet_noparam__ConstPool__CONST_haead36df_0;

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__trace);
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__val;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__val = 0;
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__rdy;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__325__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__325__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__325__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__325__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__326__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__326__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__326__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__326__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__326__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__326__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__327__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__327__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__327__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__327__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__328__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__328__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__328__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__328__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__328__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__328__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__329__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__329__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__329__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__329__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__330__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__330__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__330__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__330__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__330__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__330__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__331__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__331__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__331__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__331__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__332__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__332__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__332__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__332__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__332__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__332__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[2U] 
                                         >> 0x18U)),
                  2,(3U & (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[2U] 
                           >> 0x16U)),8,(0xffU & (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[2U] 
                                                  >> 0xeU)));
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__str);
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__rdy 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
        [1U];
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__val 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__trace, trace_str);
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__rdy) 
         & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__325__str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__325__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__325__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__325__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__325__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__325__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__325__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__325__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__325__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__325__trace);
    } else if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__rdy) 
                & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__val)))) {
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__326__num 
            = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__326__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__326__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__326__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__326__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__326__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__326__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__326__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__326__trace);
    } else if (((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__rdy)) 
                & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__327__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__327__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__327__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__327__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__327__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__327__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__327__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__327__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__327__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__327__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__328__num 
            = (CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__328__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__328__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__328__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__328__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__328__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__328__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__328__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__328__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__rdy)) 
                      & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__329__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__329__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__329__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__329__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__329__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__329__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__329__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__329__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__329__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__329__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__330__num 
            = (CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__330__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__330__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__330__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__330__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__330__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__330__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__330__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__330__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__331__str, VCacheNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__331__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__331__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__331__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__331__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__331__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__331__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__331__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__331__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__331__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__332__num 
            = (CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__332__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__332__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__332__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__332__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__332__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__332__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__332__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__332__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__324__trace);
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace);
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__val;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__val = 0;
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__rdy;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__334__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__334__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__334__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__334__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__335__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__335__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__335__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__335__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__335__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__335__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__336__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__336__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__336__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__336__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__337__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__337__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__337__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__337__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__337__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__337__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__338__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__338__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__338__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__338__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__339__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__339__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__339__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__339__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__339__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__339__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__340__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__340__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__340__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__340__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__341__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__341__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__341__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__341__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__341__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__341__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[2U] 
                                         >> 0x18U)),
                  2,(3U & (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[2U] 
                           >> 0x16U)),8,(0xffU & (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[2U] 
                                                  >> 0xeU)));
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__str);
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__rdy 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
        [2U];
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__val 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace, trace_str);
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__rdy) 
         & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__334__str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__334__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__334__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__334__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__334__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__334__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__334__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__334__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__334__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__334__trace);
    } else if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__rdy) 
                & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__val)))) {
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__335__num 
            = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__335__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__335__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__335__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__335__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__335__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__335__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__335__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__335__trace);
    } else if (((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__rdy)) 
                & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__336__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__336__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__336__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__336__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__336__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__336__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__336__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__336__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__336__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__336__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__337__num 
            = (CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__337__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__337__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__337__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__337__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__337__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__337__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__337__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__337__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__rdy)) 
                      & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__338__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__338__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__338__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__338__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__338__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__338__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__338__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__338__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__338__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__338__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__339__num 
            = (CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__339__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__339__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__339__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__339__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__339__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__339__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__339__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__339__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__340__str, VCacheNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__340__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__340__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__340__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__340__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__340__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__340__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__340__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__340__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__340__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__341__num 
            = (CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__341__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__341__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__341__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__341__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__341__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__341__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__341__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__341__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace);
}

extern const VlWide<128>/*4095:0*/ VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0;
extern const VlWide<128>/*4095:0*/ VCacheNet_noparam__ConstPool__CONST_h363e659f_0;
extern const VlWide<128>/*4095:0*/ VCacheNet_noparam__ConstPool__CONST_hf1afa22a_0;
extern const VlWide<128>/*4095:0*/ VCacheNet_noparam__ConstPool__CONST_h803d56e6_0;

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__342__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__342__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__342__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__342__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__343__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__343__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__343__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__343__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__344__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__344__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__344__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__344__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__345__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__345__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__345__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__345__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__346__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__346__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__346__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__346__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__347__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__347__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__347__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__347__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__348__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__348__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__348__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__348__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__349__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__349__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__349__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__349__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__350__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__350__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__350__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__350__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__351__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__351__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__351__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__351__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__352__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__352__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__352__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__352__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__353__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__353__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__353__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__353__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__354__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__354__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__354__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__354__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__355__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__355__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__355__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__355__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__356__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__356__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__356__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__356__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__357__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__357__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__357__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__357__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__line_trace__358__trace_str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__line_trace__358__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__359__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__359__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__359__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__359__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__360__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__360__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__360__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__360__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__361__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__361__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__361__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__361__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__362__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__362__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__362__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__362__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__line_trace__363__trace_str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__line_trace__363__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__364__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__364__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__364__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__364__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__365__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__365__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__365__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__365__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__366__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__366__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__366__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__366__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__367__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__367__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__367__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__367__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__line_trace__368__trace_str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__line_trace__368__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__369__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__369__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__369__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__369__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__370__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__370__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__370__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__370__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__371__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__371__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__371__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__371__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__372__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__372__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__372__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__372__str);
    // Body
    if ((4U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__342__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__342__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__342__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__342__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__342__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__342__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__342__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__342__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__342__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__342__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__343__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__343__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__343__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__343__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__343__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__343__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__343__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__343__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__343__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__343__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__344__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__344__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__344__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__344__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__344__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__344__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__344__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__344__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__344__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__344__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__345__str, VCacheNet_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__345__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__345__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__345__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__345__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__345__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__345__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__345__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__345__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__345__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__346__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__346__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__346__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__346__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__346__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__346__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__346__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__346__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__346__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__346__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__347__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__347__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__347__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__347__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__347__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__347__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__347__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__347__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__347__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__347__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__348__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__348__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__348__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__348__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__348__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__348__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__348__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__348__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__348__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__348__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__349__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__349__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__349__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__349__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__349__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__349__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__349__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__349__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__349__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__349__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__350__str, VCacheNet_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__350__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__350__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__350__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__350__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__350__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__350__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__350__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__350__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__350__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__351__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__351__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__351__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__351__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__351__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__351__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__351__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__351__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__351__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__351__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__352__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__352__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__352__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__352__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__352__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__352__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__352__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__352__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__352__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__352__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__353__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__353__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__353__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__353__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__353__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__353__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__353__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__353__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__353__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__353__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__354__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__354__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__354__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__354__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__354__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__354__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__354__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__354__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__354__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__354__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__355__str, VCacheNet_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__355__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__355__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__355__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__355__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__355__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__355__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__355__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__355__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__355__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__356__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__356__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__356__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__356__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__356__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__356__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__356__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__356__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__356__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__356__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__357__str, VCacheNet_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__357__trace, trace_str);
    vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__357__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__357__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
        = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__357__trace[0U];
    vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__357__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__357__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__357__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__357__trace[0U] 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__append_str__357__trace);
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__line_trace__358__trace_str, trace_str);
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__359__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__359__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__line_trace__358__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__359__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__359__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__359__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__359__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__359__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__359__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__359__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__line_trace__358__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__359__trace);
    } else if ((1U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__360__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__360__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__line_trace__358__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__360__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__360__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__360__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__360__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__360__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__360__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__360__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__line_trace__358__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__360__trace);
    } else if ((2U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__361__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__361__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__line_trace__358__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__361__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__361__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__361__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__361__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__361__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__361__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__361__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__line_trace__358__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__361__trace);
    } else if ((3U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__362__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__362__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__line_trace__358__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__362__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__362__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__362__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__362__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__362__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__362__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__362__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__line_trace__358__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__362__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__line_trace__358__trace_str);
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__line_trace__363__trace_str, trace_str);
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__364__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__364__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__line_trace__363__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__364__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__364__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__364__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__364__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__364__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__364__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__364__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__line_trace__363__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__364__trace);
    } else if ((1U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__365__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__365__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__line_trace__363__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__365__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__365__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__365__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__365__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__365__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__365__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__365__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__line_trace__363__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__365__trace);
    } else if ((2U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__366__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__366__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__line_trace__363__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__366__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__366__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__366__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__366__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__366__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__366__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__366__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__line_trace__363__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__366__trace);
    } else if ((3U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__367__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__367__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__line_trace__363__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__367__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__367__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__367__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__367__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__367__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__367__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__367__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__line_trace__363__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__367__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__line_trace__363__trace_str);
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__line_trace__368__trace_str, trace_str);
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__369__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__369__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__line_trace__368__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__369__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__369__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__369__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__369__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__369__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__369__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__369__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__line_trace__368__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__369__trace);
    } else if ((1U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__370__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__370__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__line_trace__368__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__370__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__370__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__370__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__370__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__370__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__370__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__370__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__line_trace__368__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__370__trace);
    } else if ((2U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__371__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__371__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__line_trace__368__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__371__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__371__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__371__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__371__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__371__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__371__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__371__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__line_trace__368__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__371__trace);
    } else if ((3U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__372__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__372__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__line_trace__368__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__372__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__372__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__372__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__372__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__372__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__372__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__372__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__line_trace__368__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__372__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__line_trace__368__trace_str);
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__373__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__373__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__373__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__373__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__374__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__374__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__374__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__374__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__373__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__373__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__373__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__373__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__373__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__373__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__373__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__373__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__373__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__373__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__374__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__374__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__374__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__374__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__374__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__374__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__374__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__374__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__374__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__374__trace);
    }
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__375__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__375__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__375__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__375__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__376__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__376__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__376__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__376__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__375__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__375__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__375__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__375__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__375__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__375__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__375__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__375__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__375__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__375__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__376__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__376__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__376__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__376__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__376__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__376__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__376__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__376__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__376__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__376__trace);
    }
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__377__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__377__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__377__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__377__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__378__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__378__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__378__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__378__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__377__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__377__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__377__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__377__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__377__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__377__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__377__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__377__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__377__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__377__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__378__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__378__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__378__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__378__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__378__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__378__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__378__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__378__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__378__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__378__trace);
    }
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__379__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__379__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__379__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__379__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__380__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__380__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__380__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__380__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__381__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__381__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__381__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__381__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__382__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__382__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__382__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__382__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__379__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__379__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__379__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__379__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__379__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__379__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__379__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__379__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__379__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__379__trace);
    } else if ((1U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__380__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__380__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__380__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__380__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__380__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__380__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__380__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__380__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__380__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__380__trace);
    } else if ((2U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__381__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__381__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__381__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__381__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__381__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__381__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__381__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__381__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__381__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__381__trace);
    } else if ((3U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__382__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__382__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__382__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__382__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__382__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__382__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__382__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__382__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__382__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__382__trace);
    }
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__383__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__383__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__383__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__383__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__384__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__384__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__384__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__384__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__385__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__385__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__385__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__385__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__386__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__386__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__386__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__386__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__383__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__383__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__383__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__383__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__383__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__383__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__383__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__383__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__383__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__383__trace);
    } else if ((1U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__384__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__384__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__384__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__384__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__384__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__384__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__384__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__384__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__384__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__384__trace);
    } else if ((2U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__385__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__385__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__385__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__385__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__385__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__385__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__385__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__385__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__385__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__385__trace);
    } else if ((3U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__386__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__386__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__386__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__386__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__386__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__386__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__386__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__386__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__386__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__386__trace);
    }
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__387__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__387__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__387__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__387__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__388__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__388__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__388__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__388__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__389__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__389__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__389__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__389__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__390__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__390__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__390__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__390__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__387__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__387__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__387__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__387__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__387__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__387__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__387__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__387__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__387__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__387__trace);
    } else if ((1U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__388__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__388__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__388__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__388__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__388__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__388__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__388__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__388__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__388__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__388__trace);
    } else if ((2U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__389__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__389__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__389__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__389__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__389__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__389__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__389__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__389__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__389__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__389__trace);
    } else if ((3U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__390__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__390__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__390__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__390__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__390__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__390__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__390__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__390__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__390__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__390__trace);
    }
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace);
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__val;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__val = 0;
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__rdy;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__392__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__392__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__392__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__392__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__393__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__393__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__393__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__393__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__393__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__393__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__394__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__394__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__394__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__394__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__395__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__395__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__395__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__395__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__395__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__395__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__396__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__396__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__396__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__396__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__397__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__397__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__397__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__397__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__397__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__397__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__398__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__398__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__398__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__398__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__399__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__399__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__399__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__399__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__399__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__399__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[2U] 
                                         >> 0x18U)),
                  2,(3U & (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[2U] 
                           >> 0x16U)),8,(0xffU & (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[2U] 
                                                  >> 0xeU)));
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__str);
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__rdy 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
        [0U];
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__val 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace, trace_str);
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__rdy) 
         & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__392__str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__392__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__392__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__392__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__392__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__392__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__392__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__392__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__392__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__392__trace);
    } else if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__rdy) 
                & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__val)))) {
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__393__num 
            = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__393__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__393__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__393__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__393__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__393__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__393__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__393__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__393__trace);
    } else if (((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__rdy)) 
                & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__394__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__394__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__394__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__394__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__394__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__394__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__394__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__394__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__394__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__394__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__395__num 
            = (CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__395__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__395__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__395__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__395__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__395__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__395__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__395__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__395__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__rdy)) 
                      & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__396__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__396__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__396__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__396__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__396__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__396__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__396__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__396__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__396__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__396__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__397__num 
            = (CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__397__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__397__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__397__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__397__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__397__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__397__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__397__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__397__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__398__str, VCacheNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__398__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__398__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__398__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__398__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__398__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__398__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__398__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__398__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__398__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__399__num 
            = (CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__399__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__399__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__399__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__399__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__399__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__399__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__399__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__399__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace);
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace);
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__val;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__val = 0;
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__rdy;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__401__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__401__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__401__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__401__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__402__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__402__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__402__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__402__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__402__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__402__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__403__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__403__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__403__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__403__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__404__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__404__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__404__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__404__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__404__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__404__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__405__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__405__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__405__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__405__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__406__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__406__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__406__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__406__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__406__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__406__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__407__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__407__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__407__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__407__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__408__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__408__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__408__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__408__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__408__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__408__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[2U] 
                                         >> 0x18U)),
                  2,(3U & (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[2U] 
                           >> 0x16U)),8,(0xffU & (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[2U] 
                                                  >> 0xeU)));
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__str);
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__rdy 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
        [1U];
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__val 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace, trace_str);
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__rdy) 
         & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__401__str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__401__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__401__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__401__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__401__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__401__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__401__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__401__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__401__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__401__trace);
    } else if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__rdy) 
                & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__val)))) {
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__402__num 
            = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__402__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__402__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__402__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__402__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__402__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__402__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__402__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__402__trace);
    } else if (((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__rdy)) 
                & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__403__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__403__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__403__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__403__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__403__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__403__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__403__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__403__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__403__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__403__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__404__num 
            = (CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__404__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__404__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__404__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__404__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__404__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__404__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__404__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__404__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__rdy)) 
                      & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__405__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__405__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__405__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__405__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__405__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__405__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__405__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__405__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__405__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__405__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__406__num 
            = (CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__406__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__406__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__406__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__406__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__406__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__406__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__406__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__406__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__407__str, VCacheNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__407__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__407__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__407__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__407__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__407__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__407__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__407__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__407__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__407__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__408__num 
            = (CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__408__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__408__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__408__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__408__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__408__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__408__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__408__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__408__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace);
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace);
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__val;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__val = 0;
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__rdy;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__410__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__410__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__410__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__410__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__411__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__411__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__411__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__411__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__411__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__411__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__412__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__412__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__412__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__412__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__413__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__413__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__413__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__413__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__413__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__413__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__414__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__414__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__414__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__414__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__415__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__415__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__415__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__415__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__415__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__415__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__416__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__416__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__416__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__416__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__417__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__417__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__417__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__417__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__417__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__417__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[2U] 
                                         >> 0x18U)),
                  2,(3U & (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[2U] 
                           >> 0x16U)),8,(0xffU & (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[2U] 
                                                  >> 0xeU)));
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__str);
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__rdy 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
        [2U];
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__val 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace, trace_str);
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__rdy) 
         & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__410__str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__410__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__410__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__410__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__410__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__410__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__410__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__410__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__410__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__410__trace);
    } else if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__rdy) 
                & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__val)))) {
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__411__num 
            = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__411__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__411__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__411__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__411__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__411__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__411__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__411__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__411__trace);
    } else if (((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__rdy)) 
                & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__412__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__412__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__412__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__412__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__412__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__412__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__412__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__412__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__412__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__412__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__413__num 
            = (CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__413__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__413__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__413__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__413__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__413__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__413__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__413__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__413__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__rdy)) 
                      & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__414__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__414__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__414__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__414__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__414__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__414__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__414__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__414__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__414__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__414__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__415__num 
            = (CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__415__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__415__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__415__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__415__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__415__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__415__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__415__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__415__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__416__str, VCacheNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__416__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__416__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__416__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__416__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__416__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__416__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__416__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__416__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__416__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__417__num 
            = (CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__417__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__417__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__417__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__417__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__417__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__417__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__417__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__417__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__409__trace);
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__418__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__418__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__418__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__418__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__419__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__419__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__419__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__419__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__420__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__420__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__420__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__420__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__421__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__421__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__421__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__421__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__422__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__422__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__422__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__422__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__423__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__423__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__423__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__423__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__424__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__424__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__424__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__424__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__425__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__425__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__425__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__425__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__426__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__426__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__426__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__426__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__427__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__427__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__427__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__427__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__428__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__428__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__428__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__428__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__429__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__429__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__429__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__429__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__430__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__430__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__430__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__430__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__431__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__431__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__431__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__431__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__432__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__432__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__432__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__432__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__433__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__433__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__433__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__433__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__line_trace__434__trace_str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__line_trace__434__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__435__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__435__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__435__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__435__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__436__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__436__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__436__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__436__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__437__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__437__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__437__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__437__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__438__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__438__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__438__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__438__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__line_trace__439__trace_str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__line_trace__439__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__440__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__440__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__440__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__440__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__441__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__441__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__441__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__441__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__442__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__442__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__442__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__442__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__443__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__443__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__443__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__443__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__line_trace__444__trace_str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__line_trace__444__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__445__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__445__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__445__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__445__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__446__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__446__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__446__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__446__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__447__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__447__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__447__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__447__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__448__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__448__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__448__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__448__str);
    // Body
    if ((4U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__418__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__418__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__418__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__418__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__418__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__418__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__418__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__418__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__418__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__418__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__419__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__419__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__419__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__419__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__419__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__419__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__419__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__419__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__419__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__419__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__420__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__420__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__420__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__420__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__420__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__420__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__420__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__420__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__420__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__420__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__421__str, VCacheNet_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__421__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__421__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__421__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__421__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__421__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__421__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__421__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__421__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__421__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__422__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__422__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__422__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__422__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__422__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__422__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__422__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__422__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__422__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__422__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__423__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__423__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__423__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__423__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__423__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__423__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__423__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__423__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__423__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__423__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__424__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__424__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__424__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__424__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__424__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__424__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__424__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__424__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__424__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__424__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__425__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__425__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__425__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__425__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__425__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__425__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__425__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__425__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__425__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__425__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__426__str, VCacheNet_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__426__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__426__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__426__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__426__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__426__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__426__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__426__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__426__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__426__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__427__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__427__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__427__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__427__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__427__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__427__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__427__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__427__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__427__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__427__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__428__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__428__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__428__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__428__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__428__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__428__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__428__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__428__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__428__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__428__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__429__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__429__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__429__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__429__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__429__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__429__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__429__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__429__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__429__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__429__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__430__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__430__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__430__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__430__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__430__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__430__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__430__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__430__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__430__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__430__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__431__str, VCacheNet_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__431__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__431__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__431__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__431__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__431__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__431__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__431__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__431__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__431__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__432__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__432__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__432__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__432__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__432__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__432__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__432__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__432__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__432__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__432__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__433__str, VCacheNet_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__433__trace, trace_str);
    vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__433__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__433__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
        = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__433__trace[0U];
    vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__433__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__433__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__433__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__433__trace[0U] 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__append_str__433__trace);
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__line_trace__434__trace_str, trace_str);
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__435__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__435__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__line_trace__434__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__435__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__435__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__435__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__435__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__435__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__435__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__435__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__line_trace__434__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__435__trace);
    } else if ((1U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__436__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__436__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__line_trace__434__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__436__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__436__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__436__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__436__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__436__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__436__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__436__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__line_trace__434__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__436__trace);
    } else if ((2U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__437__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__437__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__line_trace__434__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__437__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__437__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__437__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__437__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__437__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__437__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__437__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__line_trace__434__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__437__trace);
    } else if ((3U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__438__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__438__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__line_trace__434__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__438__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__438__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__438__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__438__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__438__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__438__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__438__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__line_trace__434__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__438__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__line_trace__434__trace_str);
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__line_trace__439__trace_str, trace_str);
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__440__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__440__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__line_trace__439__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__440__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__440__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__440__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__440__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__440__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__440__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__440__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__line_trace__439__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__440__trace);
    } else if ((1U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__441__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__441__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__line_trace__439__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__441__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__441__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__441__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__441__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__441__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__441__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__441__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__line_trace__439__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__441__trace);
    } else if ((2U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__442__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__442__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__line_trace__439__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__442__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__442__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__442__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__442__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__442__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__442__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__442__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__line_trace__439__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__442__trace);
    } else if ((3U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__443__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__443__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__line_trace__439__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__443__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__443__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__443__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__443__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__443__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__443__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__443__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__line_trace__439__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__443__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__line_trace__439__trace_str);
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__line_trace__444__trace_str, trace_str);
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__445__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__445__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__line_trace__444__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__445__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__445__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__445__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__445__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__445__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__445__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__445__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__line_trace__444__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__445__trace);
    } else if ((1U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__446__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__446__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__line_trace__444__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__446__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__446__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__446__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__446__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__446__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__446__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__446__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__line_trace__444__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__446__trace);
    } else if ((2U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__447__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__447__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__line_trace__444__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__447__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__447__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__447__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__447__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__447__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__447__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__447__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__line_trace__444__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__447__trace);
    } else if ((3U == CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__448__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__448__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__line_trace__444__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__448__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__448__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__448__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__448__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__448__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__448__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__448__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__line_trace__444__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__448__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__line_trace__444__trace_str);
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__449__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__449__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__449__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__449__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__450__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__450__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__450__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__450__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__449__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__449__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__449__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__449__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__449__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__449__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__449__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__449__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__449__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__449__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__450__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__450__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__450__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__450__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__450__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__450__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__450__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__450__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__450__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__450__trace);
    }
}
