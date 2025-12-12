// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiCoreSys_noparam.h for the primary calling header

#include "VMultiCoreSys_noparam__pch.h"
#include "VMultiCoreSys_noparam__Syms.h"
#include "VMultiCoreSys_noparam___024root.h"

extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0;

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__885__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__885__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__885__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__885__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__886__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__886__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__886__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__886__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__886__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__886__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__887__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__887__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__887__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__887__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__888__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__888__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__888__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__888__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__888__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__888__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__889__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__889__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__889__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__889__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__890__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__890__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__890__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__890__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__890__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__890__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__891__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__891__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__891__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__891__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__892__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__892__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__892__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__892__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__892__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__892__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[5U] 
                                         >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[5U] 
                           >> 0x18U)),8,(0xffU & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[5U] 
                                                  >> 0x10U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router0__ostream_rdy
        [1U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__885__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__885__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__885__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__885__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__885__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__885__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__885__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__885__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__885__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__885__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__886__num 
            = MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__886__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__886__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__886__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__886__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__886__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__886__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__886__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__886__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__887__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__887__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__887__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__887__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__887__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__887__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__887__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__887__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__887__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__887__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__888__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__888__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__888__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__888__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__888__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__888__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__888__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__888__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__888__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__889__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__889__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__889__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__889__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__889__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__889__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__889__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__889__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__889__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__889__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__890__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__890__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__890__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__890__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__890__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__890__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__890__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__890__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__890__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__891__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__891__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__891__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__891__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__891__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__891__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__891__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__891__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__891__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__891__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__892__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__892__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__892__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__892__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__892__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__892__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__892__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__892__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__892__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__884__trace);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__894__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__894__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__894__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__894__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__895__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__895__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__895__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__895__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__895__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__895__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__896__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__896__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__896__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__896__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__897__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__897__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__897__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__897__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__897__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__897__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__898__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__898__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__898__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__898__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__899__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__899__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__899__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__899__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__899__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__899__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__900__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__900__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__900__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__900__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__901__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__901__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__901__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__901__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__901__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__901__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[5U] 
                                         >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[5U] 
                           >> 0x18U)),8,(0xffU & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[5U] 
                                                  >> 0x10U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router0__ostream_rdy
        [2U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__894__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__894__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__894__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__894__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__894__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__894__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__894__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__894__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__894__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__894__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__895__num 
            = MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__895__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__895__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__895__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__895__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__895__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__895__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__895__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__895__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__896__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__896__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__896__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__896__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__896__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__896__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__896__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__896__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__896__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__896__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__897__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__897__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__897__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__897__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__897__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__897__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__897__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__897__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__897__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__898__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__898__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__898__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__898__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__898__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__898__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__898__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__898__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__898__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__898__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__899__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__899__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__899__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__899__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__899__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__899__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__899__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__899__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__899__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__900__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__900__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__900__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__900__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__900__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__900__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__900__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__900__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__900__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__900__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__901__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__901__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__901__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__901__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__901__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__901__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__901__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__901__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__901__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__893__trace);
}

extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_hf1afa22a_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_h803d56e6_0;

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__902__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__902__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__902__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__902__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__903__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__903__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__903__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__903__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__904__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__904__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__904__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__904__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__905__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__905__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__905__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__905__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__906__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__906__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__906__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__906__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__907__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__907__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__907__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__907__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__908__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__908__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__908__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__908__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__909__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__909__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__909__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__909__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__910__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__910__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__910__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__910__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__911__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__911__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__911__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__911__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__912__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__912__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__912__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__912__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__913__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__913__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__913__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__913__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__914__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__914__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__914__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__914__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__915__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__915__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__915__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__915__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__916__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__916__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__916__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__916__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__917__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__917__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__917__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__917__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__line_trace__918__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__line_trace__918__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__922__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__922__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__922__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__922__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__line_trace__923__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__line_trace__923__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__926__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__926__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__926__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__926__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__927__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__927__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__927__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__927__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__line_trace__928__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__line_trace__928__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__930__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__930__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__930__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__930__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__931__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__931__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__931__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__931__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__932__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__932__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__932__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__932__str);
    // Body
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__902__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__902__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__902__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__902__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__902__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__902__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__902__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__902__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__902__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__902__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__903__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__903__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__903__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__903__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__903__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__903__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__903__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__903__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__903__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__903__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__904__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__904__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__904__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__904__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__904__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__904__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__904__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__904__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__904__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__904__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__905__str, VMultiCoreSys_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__905__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__905__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__905__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__905__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__905__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__905__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__905__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__905__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__905__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__906__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__906__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__906__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__906__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__906__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__906__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__906__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__906__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__906__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__906__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__907__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__907__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__907__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__907__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__907__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__907__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__907__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__907__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__907__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__907__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__908__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__908__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__908__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__908__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__908__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__908__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__908__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__908__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__908__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__908__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__909__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__909__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__909__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__909__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__909__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__909__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__909__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__909__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__909__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__909__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__910__str, VMultiCoreSys_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__910__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__910__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__910__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__910__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__910__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__910__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__910__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__910__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__910__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__911__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__911__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__911__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__911__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__911__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__911__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__911__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__911__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__911__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__911__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__912__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__912__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__912__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__912__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__912__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__912__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__912__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__912__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__912__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__912__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__913__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__913__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__913__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__913__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__913__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__913__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__913__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__913__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__913__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__913__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__914__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__914__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__914__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__914__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__914__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__914__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__914__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__914__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__914__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__914__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__915__str, VMultiCoreSys_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__915__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__915__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__915__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__915__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__915__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__915__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__915__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__915__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__915__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__916__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__916__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__916__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__916__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__916__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__916__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__916__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__916__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__916__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__916__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__917__str, VMultiCoreSys_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__917__trace, trace_str);
    vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__917__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__917__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
        = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__917__trace[0U];
    vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__917__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__917__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__917__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__917__trace[0U] 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__append_str__917__trace);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__line_trace__918__trace_str, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__line_trace__918__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__line_trace__918__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__line_trace__918__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__line_trace__918__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__line_trace__918__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__line_trace__918__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__922__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__922__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__line_trace__918__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__922__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__922__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__922__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__922__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__922__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__922__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__922__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__line_trace__918__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__922__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__line_trace__918__trace_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__line_trace__923__trace_str, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__line_trace__923__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__line_trace__923__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__line_trace__923__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__line_trace__923__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__926__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__926__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__line_trace__923__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__926__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__926__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__926__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__926__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__926__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__926__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__926__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__line_trace__923__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__926__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__927__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__927__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__line_trace__923__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__927__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__927__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__927__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__927__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__927__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__927__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__927__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__line_trace__923__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__927__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__line_trace__923__trace_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__line_trace__928__trace_str, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__line_trace__928__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__line_trace__928__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__930__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__930__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__line_trace__928__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__930__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__930__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__930__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__930__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__930__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__930__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__930__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__line_trace__928__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__930__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__931__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__931__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__line_trace__928__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__931__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__931__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__931__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__931__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__931__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__931__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__931__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__line_trace__928__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__931__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__932__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__932__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__line_trace__928__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__932__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__932__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__932__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__932__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__932__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__932__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__932__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__line_trace__928__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__932__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__line_trace__928__trace_str);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__933__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__933__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__933__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__933__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__934__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__934__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__934__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__934__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__933__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__933__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__933__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__933__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__933__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__933__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__933__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__933__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__933__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__933__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__934__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__934__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__934__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__934__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__934__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__934__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__934__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__934__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__934__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__934__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__935__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__935__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__935__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__935__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__936__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__936__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__936__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__936__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__935__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__935__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__935__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__935__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__935__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__935__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__935__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__935__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__935__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__935__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__936__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__936__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__936__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__936__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__936__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__936__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__936__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__936__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__936__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__936__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__937__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__937__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__937__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__937__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__938__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__938__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__938__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__938__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__937__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__937__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__937__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__937__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__937__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__937__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__937__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__937__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__937__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__937__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__938__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__938__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__938__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__938__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__938__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__938__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__938__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__938__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__938__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__938__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__939__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__939__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__939__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__939__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__940__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__940__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__940__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__940__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__941__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__941__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__941__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__941__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__942__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__942__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__942__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__942__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__939__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__939__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__939__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__939__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__939__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__939__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__939__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__939__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__939__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__939__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__940__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__940__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__940__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__940__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__940__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__940__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__940__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__940__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__940__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__940__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__941__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__941__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__941__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__941__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__941__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__941__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__941__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__941__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__941__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__941__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__942__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__942__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__942__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__942__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__942__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__942__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__942__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__942__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__942__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__942__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__943__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__943__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__943__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__943__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__944__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__944__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__944__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__944__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__945__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__945__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__945__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__945__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__946__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__946__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__946__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__946__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__943__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__943__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__943__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__943__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__943__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__943__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__943__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__943__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__943__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__943__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__944__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__944__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__944__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__944__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__944__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__944__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__944__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__944__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__944__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__944__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__945__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__945__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__945__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__945__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__945__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__945__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__945__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__945__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__945__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__945__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__946__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__946__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__946__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__946__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__946__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__946__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__946__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__946__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__946__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__946__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__947__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__947__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__947__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__947__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__948__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__948__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__948__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__948__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__949__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__949__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__949__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__949__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__950__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__950__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__950__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__950__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__947__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__947__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__947__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__947__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__947__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__947__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__947__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__947__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__947__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__947__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__948__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__948__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__948__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__948__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__948__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__948__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__948__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__948__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__948__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__948__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__949__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__949__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__949__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__949__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__949__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__949__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__949__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__949__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__949__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__949__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__950__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__950__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__950__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__950__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__950__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__950__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__950__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__950__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__950__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__950__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__952__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__952__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__952__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__952__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__953__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__953__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__953__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__953__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__953__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__953__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__954__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__954__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__954__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__954__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__955__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__955__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__955__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__955__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__955__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__955__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__956__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__956__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__956__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__956__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__957__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__957__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__957__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__957__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__957__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__957__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__958__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__958__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__958__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__958__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__959__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__959__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__959__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__959__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__959__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__959__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[5U] 
                                         >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[5U] 
                           >> 0x18U)),8,(0xffU & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[5U] 
                                                  >> 0x10U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router1__ostream_rdy
        [0U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__952__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__952__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__952__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__952__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__952__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__952__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__952__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__952__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__952__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__952__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__953__num 
            = MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__953__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__953__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__953__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__953__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__953__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__953__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__953__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__953__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__954__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__954__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__954__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__954__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__954__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__954__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__954__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__954__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__954__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__954__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__955__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__955__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__955__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__955__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__955__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__955__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__955__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__955__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__955__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__956__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__956__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__956__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__956__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__956__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__956__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__956__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__956__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__956__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__956__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__957__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__957__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__957__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__957__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__957__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__957__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__957__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__957__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__957__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__958__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__958__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__958__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__958__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__958__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__958__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__958__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__958__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__958__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__958__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__959__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__959__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__959__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__959__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__959__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__959__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__959__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__959__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__959__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__951__trace);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__961__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__961__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__961__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__961__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__962__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__962__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__962__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__962__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__962__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__962__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__963__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__963__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__963__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__963__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__964__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__964__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__964__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__964__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__964__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__964__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__965__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__965__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__965__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__965__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__966__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__966__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__966__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__966__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__966__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__966__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__967__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__967__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__967__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__967__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__968__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__968__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__968__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__968__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__968__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__968__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[5U] 
                                         >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[5U] 
                           >> 0x18U)),8,(0xffU & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[5U] 
                                                  >> 0x10U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router1__ostream_rdy
        [1U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__961__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__961__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__961__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__961__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__961__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__961__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__961__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__961__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__961__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__961__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__962__num 
            = MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__962__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__962__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__962__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__962__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__962__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__962__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__962__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__962__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__963__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__963__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__963__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__963__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__963__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__963__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__963__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__963__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__963__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__963__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__964__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__964__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__964__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__964__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__964__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__964__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__964__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__964__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__964__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__965__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__965__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__965__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__965__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__965__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__965__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__965__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__965__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__965__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__965__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__966__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__966__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__966__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__966__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__966__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__966__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__966__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__966__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__966__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__967__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__967__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__967__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__967__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__967__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__967__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__967__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__967__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__967__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__967__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__968__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__968__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__968__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__968__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__968__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__968__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__968__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__968__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__968__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__960__trace);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__970__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__970__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__970__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__970__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__971__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__971__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__971__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__971__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__971__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__971__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__972__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__972__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__972__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__972__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__973__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__973__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__973__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__973__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__973__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__973__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__974__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__974__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__974__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__974__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__975__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__975__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__975__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__975__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__975__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__975__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__976__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__976__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__976__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__976__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__977__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__977__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__977__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__977__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__977__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__977__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[5U] 
                                         >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[5U] 
                           >> 0x18U)),8,(0xffU & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[5U] 
                                                  >> 0x10U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router1__ostream_rdy
        [2U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__970__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__970__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__970__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__970__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__970__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__970__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__970__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__970__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__970__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__970__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__971__num 
            = MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__971__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__971__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__971__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__971__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__971__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__971__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__971__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__971__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__972__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__972__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__972__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__972__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__972__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__972__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__972__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__972__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__972__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__972__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__973__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__973__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__973__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__973__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__973__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__973__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__973__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__973__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__973__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__974__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__974__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__974__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__974__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__974__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__974__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__974__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__974__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__974__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__974__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__975__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__975__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__975__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__975__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__975__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__975__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__975__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__975__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__975__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__976__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__976__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__976__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__976__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__976__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__976__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__976__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__976__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__976__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__976__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__977__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__977__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__977__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__977__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__977__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__977__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__977__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__977__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__977__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__969__trace);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__978__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__978__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__978__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__978__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__979__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__979__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__979__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__979__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__980__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__980__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__980__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__980__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__981__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__981__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__981__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__981__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__982__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__982__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__982__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__982__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__983__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__983__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__983__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__983__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__984__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__984__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__984__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__984__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__985__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__985__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__985__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__985__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__986__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__986__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__986__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__986__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__987__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__987__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__987__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__987__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__988__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__988__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__988__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__988__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__989__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__989__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__989__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__989__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__990__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__990__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__990__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__990__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__991__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__991__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__991__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__991__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__992__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__992__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__992__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__992__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__993__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__993__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__993__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__993__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__line_trace__994__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__line_trace__994__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__998__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__998__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__998__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__998__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__line_trace__999__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__line_trace__999__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1002__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1002__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1002__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1002__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1003__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1003__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1003__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1003__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__line_trace__1004__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__line_trace__1004__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1006__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1006__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1006__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1006__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1007__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1007__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1007__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1007__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1008__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1008__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1008__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1008__str);
    // Body
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__978__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__978__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__978__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__978__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__978__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__978__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__978__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__978__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__978__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__978__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__979__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__979__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__979__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__979__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__979__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__979__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__979__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__979__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__979__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__979__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__980__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__980__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__980__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__980__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__980__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__980__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__980__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__980__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__980__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__980__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__981__str, VMultiCoreSys_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__981__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__981__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__981__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__981__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__981__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__981__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__981__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__981__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__981__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__982__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__982__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__982__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__982__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__982__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__982__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__982__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__982__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__982__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__982__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__983__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__983__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__983__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__983__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__983__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__983__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__983__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__983__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__983__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__983__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__984__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__984__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__984__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__984__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__984__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__984__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__984__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__984__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__984__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__984__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__985__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__985__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__985__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__985__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__985__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__985__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__985__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__985__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__985__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__985__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__986__str, VMultiCoreSys_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__986__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__986__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__986__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__986__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__986__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__986__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__986__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__986__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__986__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__987__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__987__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__987__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__987__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__987__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__987__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__987__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__987__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__987__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__987__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__988__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__988__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__988__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__988__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__988__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__988__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__988__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__988__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__988__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__988__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__989__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__989__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__989__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__989__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__989__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__989__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__989__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__989__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__989__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__989__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__990__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__990__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__990__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__990__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__990__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__990__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__990__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__990__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__990__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__990__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__991__str, VMultiCoreSys_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__991__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__991__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__991__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__991__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__991__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__991__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__991__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__991__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__991__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__992__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__992__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__992__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__992__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__992__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__992__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__992__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__992__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__992__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__992__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__993__str, VMultiCoreSys_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__993__trace, trace_str);
    vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__993__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__993__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
        = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__993__trace[0U];
    vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__993__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__993__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__993__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__993__trace[0U] 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__append_str__993__trace);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__line_trace__994__trace_str, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__line_trace__994__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__line_trace__994__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__line_trace__994__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__line_trace__994__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__line_trace__994__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__line_trace__994__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__998__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__998__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__line_trace__994__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__998__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__998__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__998__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__998__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__998__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__998__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__998__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__line_trace__994__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__998__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__line_trace__994__trace_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__line_trace__999__trace_str, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__line_trace__999__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__line_trace__999__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__line_trace__999__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__line_trace__999__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1002__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1002__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__line_trace__999__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1002__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1002__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1002__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1002__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1002__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1002__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1002__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__line_trace__999__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1002__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1003__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1003__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__line_trace__999__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1003__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1003__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1003__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1003__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1003__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1003__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1003__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__line_trace__999__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1003__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__line_trace__999__trace_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__line_trace__1004__trace_str, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__line_trace__1004__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__line_trace__1004__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1006__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1006__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__line_trace__1004__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1006__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1006__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1006__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1006__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1006__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1006__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1006__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__line_trace__1004__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1006__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1007__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1007__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__line_trace__1004__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1007__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1007__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1007__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1007__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1007__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1007__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1007__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__line_trace__1004__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1007__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1008__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1008__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__line_trace__1004__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1008__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1008__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1008__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1008__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1008__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1008__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1008__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__line_trace__1004__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1008__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__line_trace__1004__trace_str);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1009__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1009__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1009__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1009__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1010__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1010__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1010__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1010__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1009__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1009__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1009__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1009__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1009__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1009__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1009__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1009__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1009__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1009__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1010__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1010__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1010__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1010__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1010__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1010__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1010__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1010__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1010__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1010__trace);
    }
}
