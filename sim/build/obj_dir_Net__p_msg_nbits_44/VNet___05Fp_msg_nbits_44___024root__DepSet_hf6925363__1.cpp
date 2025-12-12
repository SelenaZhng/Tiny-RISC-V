// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNet___05Fp_msg_nbits_44.h for the primary calling header

#include "VNet___05Fp_msg_nbits_44__pch.h"
#include "VNet___05Fp_msg_nbits_44__Syms.h"
#include "VNet___05Fp_msg_nbits_44___024root.h"

extern const VlWide<128>/*4095:0*/ VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0;
extern const VlWide<128>/*4095:0*/ VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VNet___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0;

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__trace);
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__val;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__val = 0;
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__rdy;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__146__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__146__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__146__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__146__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__147__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__147__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__147__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__147__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__147__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__147__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__148__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__148__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__148__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__148__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__149__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__149__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__149__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__149__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__149__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__149__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__150__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__150__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__150__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__150__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__151__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__151__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__151__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__151__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__151__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__151__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__152__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__152__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__152__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__152__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__153__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__153__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__153__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__153__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__153__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__153__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__ostream_msg 
                                                 >> 0x2aU))),
                  2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__ostream_msg 
                                   >> 0x28U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__ostream_msg 
                                                             >> 0x20U))));
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__str);
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__rdy 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__ostream_rdy
        [1U];
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__val 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__trace, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__rdy) 
         & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__146__str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__146__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__146__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__146__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__146__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__146__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__146__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__146__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__146__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__146__trace);
    } else if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__rdy) 
                & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__val)))) {
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__147__num 
            = Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__147__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__147__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__147__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__147__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__147__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__147__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__147__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__147__trace);
    } else if (((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__rdy)) 
                & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__148__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__148__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__148__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__148__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__148__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__148__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__148__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__148__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__148__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__148__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__149__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__149__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__149__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__149__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__149__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__149__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__149__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__149__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__149__trace);
    } else if ((1U & ((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__rdy)) 
                      & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__val))))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__150__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__150__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__150__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__150__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__150__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__150__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__150__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__150__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__150__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__150__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__151__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__151__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__151__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__151__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__151__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__151__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__151__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__151__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__151__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__152__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__152__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__152__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__152__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__152__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__152__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__152__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__152__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__152__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__152__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__153__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__153__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__153__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__153__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__153__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__153__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__153__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__153__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__153__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__145__trace);
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__trace);
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__val;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__val = 0;
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__rdy;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__155__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__155__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__155__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__155__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__156__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__156__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__156__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__156__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__156__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__156__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__157__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__157__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__157__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__157__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__158__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__158__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__158__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__158__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__158__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__158__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__159__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__159__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__159__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__159__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__160__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__160__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__160__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__160__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__160__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__160__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__161__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__161__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__161__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__161__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__162__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__162__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__162__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__162__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__162__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__162__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__ostream_msg 
                                                 >> 0x2aU))),
                  2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__ostream_msg 
                                   >> 0x28U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__ostream_msg 
                                                             >> 0x20U))));
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__str);
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__rdy 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__ostream_rdy
        [2U];
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__val 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__trace, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__rdy) 
         & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__155__str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__155__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__155__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__155__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__155__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__155__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__155__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__155__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__155__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__155__trace);
    } else if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__rdy) 
                & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__val)))) {
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__156__num 
            = Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__156__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__156__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__156__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__156__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__156__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__156__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__156__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__156__trace);
    } else if (((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__rdy)) 
                & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__157__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__157__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__157__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__157__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__157__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__157__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__157__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__157__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__157__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__157__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__158__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__158__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__158__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__158__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__158__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__158__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__158__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__158__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__158__trace);
    } else if ((1U & ((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__rdy)) 
                      & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__val))))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__159__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__159__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__159__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__159__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__159__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__159__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__159__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__159__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__159__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__159__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__160__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__160__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__160__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__160__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__160__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__160__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__160__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__160__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__160__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__161__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__161__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__161__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__161__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__161__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__161__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__161__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__161__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__161__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__161__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__162__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__162__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__162__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__162__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__162__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__162__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__162__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__162__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__162__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__154__trace);
}

extern const VlWide<128>/*4095:0*/ VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0;
extern const VlWide<128>/*4095:0*/ VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0;
extern const VlWide<128>/*4095:0*/ VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf1afa22a_0;
extern const VlWide<128>/*4095:0*/ VNet___05Fp_msg_nbits_44__ConstPool__CONST_h803d56e6_0;

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__num_reqs;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__num_reqs;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__num_reqs;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__163__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__163__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__163__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__163__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__164__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__164__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__164__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__164__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__165__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__165__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__165__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__165__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__166__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__166__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__166__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__166__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__167__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__167__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__167__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__167__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__168__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__168__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__168__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__168__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__169__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__169__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__169__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__169__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__170__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__170__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__170__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__170__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__171__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__171__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__171__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__171__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__172__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__172__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__172__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__172__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__173__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__173__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__173__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__173__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__174__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__174__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__174__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__174__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__175__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__175__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__175__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__175__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__176__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__176__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__176__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__176__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__177__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__177__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__177__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__177__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__178__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__178__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__178__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__178__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__line_trace__179__trace_str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__line_trace__179__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__180__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__180__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__180__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__180__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__181__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__181__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__181__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__181__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__182__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__182__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__182__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__182__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__183__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__183__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__183__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__183__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__line_trace__184__trace_str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__line_trace__184__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__185__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__185__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__185__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__185__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__186__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__186__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__186__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__186__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__187__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__187__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__187__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__187__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__188__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__188__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__188__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__188__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__line_trace__189__trace_str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__line_trace__189__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__190__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__190__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__190__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__190__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__191__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__191__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__191__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__191__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__192__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__192__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__192__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__192__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__193__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__193__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__193__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__193__str);
    // Body
    if ((4U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__163__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__163__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__163__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__163__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__163__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__163__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__163__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__163__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__163__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__163__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__164__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__164__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__164__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__164__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__164__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__164__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__164__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__164__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__164__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__164__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__165__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__165__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__165__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__165__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__165__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__165__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__165__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__165__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__165__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__165__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__166__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__166__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__166__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__166__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__166__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__166__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__166__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__166__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__166__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__166__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__167__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__167__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__167__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__167__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__167__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__167__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__167__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__167__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__167__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__167__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__168__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__168__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__168__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__168__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__168__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__168__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__168__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__168__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__168__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__168__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__169__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__169__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__169__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__169__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__169__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__169__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__169__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__169__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__169__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__169__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__170__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__170__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__170__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__170__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__170__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__170__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__170__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__170__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__170__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__170__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__171__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__171__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__171__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__171__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__171__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__171__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__171__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__171__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__171__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__171__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__172__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__172__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__172__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__172__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__172__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__172__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__172__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__172__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__172__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__172__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__173__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__173__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__173__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__173__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__173__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__173__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__173__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__173__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__173__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__173__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__174__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__174__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__174__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__174__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__174__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__174__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__174__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__174__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__174__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__174__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__175__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__175__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__175__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__175__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__175__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__175__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__175__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__175__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__175__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__175__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__176__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__176__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__176__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__176__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__176__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__176__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__176__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__176__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__176__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__176__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__177__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__177__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__177__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__177__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__177__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__177__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__177__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__177__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__177__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__177__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__178__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__178__trace, trace_str);
    vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__178__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__178__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
        = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__178__trace[0U];
    vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__178__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__178__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__178__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__178__trace[0U] 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__vc_trace__DOT__append_str__178__trace);
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__line_trace__179__trace_str, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__180__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__180__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__line_trace__179__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__180__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__180__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__180__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__180__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__180__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__180__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__180__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__line_trace__179__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__180__trace);
    } else if ((1U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__181__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__181__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__line_trace__179__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__181__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__181__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__181__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__181__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__181__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__181__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__181__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__line_trace__179__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__181__trace);
    } else if ((2U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__182__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__182__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__line_trace__179__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__182__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__182__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__182__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__182__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__182__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__182__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__182__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__line_trace__179__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__182__trace);
    } else if ((3U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__183__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__183__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__line_trace__179__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__183__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__183__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__183__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__183__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__183__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__183__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__183__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__line_trace__179__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__183__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__line_trace__179__trace_str);
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__line_trace__184__trace_str, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__185__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__185__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__line_trace__184__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__185__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__185__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__185__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__185__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__185__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__185__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__185__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__line_trace__184__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__185__trace);
    } else if ((1U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__186__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__186__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__line_trace__184__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__186__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__186__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__186__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__186__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__186__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__186__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__186__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__line_trace__184__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__186__trace);
    } else if ((2U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__187__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__187__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__line_trace__184__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__187__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__187__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__187__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__187__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__187__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__187__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__187__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__line_trace__184__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__187__trace);
    } else if ((3U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__188__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__188__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__line_trace__184__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__188__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__188__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__188__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__188__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__188__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__188__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__188__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__line_trace__184__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__188__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__line_trace__184__trace_str);
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__line_trace__189__trace_str, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__190__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__190__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__line_trace__189__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__190__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__190__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__190__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__190__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__190__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__190__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__190__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__line_trace__189__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__190__trace);
    } else if ((1U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__191__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__191__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__line_trace__189__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__191__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__191__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__191__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__191__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__191__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__191__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__191__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__line_trace__189__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__191__trace);
    } else if ((2U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__192__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__192__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__line_trace__189__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__192__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__192__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__192__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__192__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__192__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__192__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__192__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__line_trace__189__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__192__trace);
    } else if ((3U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__193__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__193__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__line_trace__189__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__193__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__193__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__193__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__193__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__193__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__193__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__193__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__line_trace__189__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__193__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__line_trace__189__trace_str);
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__194__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__194__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__194__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__194__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__195__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__195__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__195__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__195__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__194__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__194__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__194__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__194__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__194__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__194__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__194__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__194__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__194__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__194__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__195__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__195__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__195__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__195__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__195__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__195__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__195__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__195__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__195__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__195__trace);
    }
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__196__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__196__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__196__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__196__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__197__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__197__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__197__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__197__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__196__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__196__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__196__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__196__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__196__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__196__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__196__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__196__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__196__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__196__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__197__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__197__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__197__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__197__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__197__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__197__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__197__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__197__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__197__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__197__trace);
    }
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__198__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__198__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__198__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__198__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__199__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__199__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__199__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__199__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__198__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__198__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__198__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__198__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__198__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__198__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__198__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__198__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__198__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__198__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__199__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__199__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__199__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__199__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__199__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__199__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__199__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__199__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__199__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__199__trace);
    }
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__num_reqs;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__200__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__200__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__200__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__200__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__201__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__201__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__201__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__201__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__202__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__202__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__202__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__202__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__203__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__203__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__203__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__203__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__200__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__200__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__200__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__200__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__200__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__200__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__200__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__200__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__200__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__200__trace);
    } else if ((1U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__201__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__201__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__201__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__201__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__201__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__201__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__201__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__201__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__201__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__201__trace);
    } else if ((2U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__202__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__202__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__202__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__202__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__202__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__202__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__202__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__202__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__202__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__202__trace);
    } else if ((3U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__203__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__203__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__203__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__203__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__203__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__203__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__203__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__203__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__203__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__203__trace);
    }
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__num_reqs;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__204__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__204__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__204__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__204__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__205__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__205__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__205__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__205__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__206__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__206__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__206__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__206__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__207__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__207__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__207__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__207__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__204__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__204__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__204__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__204__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__204__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__204__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__204__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__204__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__204__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__204__trace);
    } else if ((1U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__205__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__205__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__205__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__205__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__205__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__205__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__205__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__205__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__205__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__205__trace);
    } else if ((2U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__206__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__206__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__206__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__206__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__206__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__206__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__206__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__206__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__206__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__206__trace);
    } else if ((3U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__207__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__207__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__207__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__207__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__207__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__207__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__207__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__207__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__207__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__207__trace);
    }
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__num_reqs;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__208__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__208__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__208__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__208__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__209__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__209__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__209__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__209__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__210__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__210__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__210__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__210__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__211__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__211__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__211__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__211__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__208__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__208__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__208__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__208__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__208__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__208__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__208__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__208__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__208__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__208__trace);
    } else if ((1U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__209__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__209__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__209__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__209__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__209__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__209__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__209__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__209__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__209__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__209__trace);
    } else if ((2U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__210__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__210__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__210__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__210__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__210__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__210__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__210__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__210__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__210__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__210__trace);
    } else if ((3U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__211__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__211__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__211__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__211__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__211__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__211__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__211__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__211__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__211__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__211__trace);
    }
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__trace);
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__val;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__val = 0;
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__rdy;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__213__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__213__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__213__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__213__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__214__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__214__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__214__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__214__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__214__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__214__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__215__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__215__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__215__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__215__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__216__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__216__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__216__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__216__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__216__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__216__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__217__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__217__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__217__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__217__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__218__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__218__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__218__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__218__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__218__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__218__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__219__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__219__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__219__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__219__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__220__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__220__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__220__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__220__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__220__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__220__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__ostream_msg 
                                                 >> 0x2aU))),
                  2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__ostream_msg 
                                   >> 0x28U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__ostream_msg 
                                                             >> 0x20U))));
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__str);
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__rdy 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__ostream_rdy
        [0U];
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__val 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__trace, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__rdy) 
         & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__213__str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__213__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__213__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__213__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__213__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__213__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__213__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__213__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__213__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__213__trace);
    } else if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__rdy) 
                & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__val)))) {
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__214__num 
            = Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__214__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__214__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__214__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__214__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__214__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__214__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__214__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__214__trace);
    } else if (((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__rdy)) 
                & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__215__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__215__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__215__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__215__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__215__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__215__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__215__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__215__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__215__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__215__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__216__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__216__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__216__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__216__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__216__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__216__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__216__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__216__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__216__trace);
    } else if ((1U & ((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__rdy)) 
                      & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__val))))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__217__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__217__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__217__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__217__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__217__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__217__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__217__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__217__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__217__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__217__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__218__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__218__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__218__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__218__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__218__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__218__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__218__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__218__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__218__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__219__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__219__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__219__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__219__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__219__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__219__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__219__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__219__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__219__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__219__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__220__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__220__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__220__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__220__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__220__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__220__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__220__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__220__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__220__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__212__trace);
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__trace);
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__val;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__val = 0;
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__rdy;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__222__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__222__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__222__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__222__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__223__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__223__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__223__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__223__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__223__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__223__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__224__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__224__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__224__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__224__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__225__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__225__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__225__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__225__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__225__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__225__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__226__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__226__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__226__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__226__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__227__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__227__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__227__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__227__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__227__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__227__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__228__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__228__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__228__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__228__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__229__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__229__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__229__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__229__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__229__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__229__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__ostream_msg 
                                                 >> 0x2aU))),
                  2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__ostream_msg 
                                   >> 0x28U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__ostream_msg 
                                                             >> 0x20U))));
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__str);
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__rdy 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__ostream_rdy
        [1U];
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__val 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__trace, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__rdy) 
         & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__222__str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__222__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__222__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__222__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__222__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__222__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__222__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__222__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__222__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__222__trace);
    } else if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__rdy) 
                & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__val)))) {
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__223__num 
            = Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__223__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__223__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__223__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__223__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__223__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__223__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__223__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__223__trace);
    } else if (((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__rdy)) 
                & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__224__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__224__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__224__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__224__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__224__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__224__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__224__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__224__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__224__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__224__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__225__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__225__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__225__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__225__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__225__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__225__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__225__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__225__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__225__trace);
    } else if ((1U & ((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__rdy)) 
                      & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__val))))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__226__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__226__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__226__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__226__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__226__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__226__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__226__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__226__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__226__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__226__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__227__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__227__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__227__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__227__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__227__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__227__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__227__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__227__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__227__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__228__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__228__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__228__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__228__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__228__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__228__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__228__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__228__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__228__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__228__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__229__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__229__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__229__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__229__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__229__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__229__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__229__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__229__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__229__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__221__trace);
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__trace);
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__val;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__val = 0;
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__rdy;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__231__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__231__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__231__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__231__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__232__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__232__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__232__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__232__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__232__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__232__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__233__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__233__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__233__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__233__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__234__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__234__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__234__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__234__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__234__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__234__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__235__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__235__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__235__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__235__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__236__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__236__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__236__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__236__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__236__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__236__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__237__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__237__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__237__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__237__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__238__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__238__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__238__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__238__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__238__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__238__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__ostream_msg 
                                                 >> 0x2aU))),
                  2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__ostream_msg 
                                   >> 0x28U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__ostream_msg 
                                                             >> 0x20U))));
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__str);
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__rdy 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__ostream_rdy
        [2U];
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__val 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__trace, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__rdy) 
         & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__231__str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__231__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__231__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__231__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__231__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__231__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__231__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__231__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__231__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__231__trace);
    } else if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__rdy) 
                & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__val)))) {
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__232__num 
            = Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__232__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__232__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__232__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__232__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__232__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__232__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__232__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__232__trace);
    } else if (((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__rdy)) 
                & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__233__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__233__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__233__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__233__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__233__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__233__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__233__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__233__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__233__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__233__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__234__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__234__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__234__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__234__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__234__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__234__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__234__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__234__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__234__trace);
    } else if ((1U & ((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__rdy)) 
                      & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__val))))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__235__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__235__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__235__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__235__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__235__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__235__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__235__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__235__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__235__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__235__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__236__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__236__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__236__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__236__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__236__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__236__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__236__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__236__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__236__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__237__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__237__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__237__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__237__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__237__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__237__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__237__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__237__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__237__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__237__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__238__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__238__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__238__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__238__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__238__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__238__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__238__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__238__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__238__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__230__trace);
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__num_reqs;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__num_reqs;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__num_reqs;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__239__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__239__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__239__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__239__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__240__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__240__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__240__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__240__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__241__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__241__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__241__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__241__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__242__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__242__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__242__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__242__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__243__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__243__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__243__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__243__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__244__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__244__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__244__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__244__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__245__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__245__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__245__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__245__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__246__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__246__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__246__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__246__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__247__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__247__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__247__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__247__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__248__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__248__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__248__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__248__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__249__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__249__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__249__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__249__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__250__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__250__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__250__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__250__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__251__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__251__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__251__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__251__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__252__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__252__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__252__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__252__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__253__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__253__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__253__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__253__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__254__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__254__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__254__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__254__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__line_trace__255__trace_str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__line_trace__255__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__256__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__256__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__256__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__256__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__257__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__257__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__257__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__257__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__258__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__258__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__258__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__258__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__259__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__259__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__259__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__259__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__line_trace__260__trace_str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__line_trace__260__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__261__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__261__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__261__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__261__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__262__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__262__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__262__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__262__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__263__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__263__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__263__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__263__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__264__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__264__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__264__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__264__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__line_trace__265__trace_str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__line_trace__265__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__266__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__266__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__266__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__266__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__267__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__267__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__267__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__267__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__268__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__268__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__268__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__268__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__269__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__269__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__269__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__269__str);
    // Body
    if ((4U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__239__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__239__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__239__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__239__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__239__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__239__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__239__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__239__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__239__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__239__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__240__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__240__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__240__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__240__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__240__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__240__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__240__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__240__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__240__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__240__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__241__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__241__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__241__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__241__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__241__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__241__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__241__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__241__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__241__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__241__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__242__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__242__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__242__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__242__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__242__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__242__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__242__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__242__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__242__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__242__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__243__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__243__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__243__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__243__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__243__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__243__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__243__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__243__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__243__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__243__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__244__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__244__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__244__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__244__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__244__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__244__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__244__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__244__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__244__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__244__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__245__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__245__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__245__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__245__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__245__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__245__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__245__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__245__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__245__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__245__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__246__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__246__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__246__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__246__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__246__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__246__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__246__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__246__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__246__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__246__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__247__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__247__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__247__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__247__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__247__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__247__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__247__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__247__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__247__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__247__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__248__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__248__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__248__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__248__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__248__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__248__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__248__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__248__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__248__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__248__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__249__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__249__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__249__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__249__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__249__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__249__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__249__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__249__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__249__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__249__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__250__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__250__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__250__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__250__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__250__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__250__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__250__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__250__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__250__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__250__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__251__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__251__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__251__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__251__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__251__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__251__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__251__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__251__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__251__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__251__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__252__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__252__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__252__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__252__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__252__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__252__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__252__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__252__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__252__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__252__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__253__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__253__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__253__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__253__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__253__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__253__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__253__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__253__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__253__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__253__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__254__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__254__trace, trace_str);
    vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__254__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__254__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
        = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__254__trace[0U];
    vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__254__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__254__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__254__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__254__trace[0U] 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__vc_trace__DOT__append_str__254__trace);
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__line_trace__255__trace_str, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__256__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__256__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__line_trace__255__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__256__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__256__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__256__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__256__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__256__str[
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
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__256__str[
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
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__256__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__line_trace__255__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__256__trace);
    } else if ((1U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__257__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__257__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__line_trace__255__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__257__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__257__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__257__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__257__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__257__str[
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
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__257__str[
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
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__257__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__line_trace__255__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__257__trace);
    } else if ((2U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__258__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__258__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__line_trace__255__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__258__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__258__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__258__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__258__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__258__str[
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
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__258__str[
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
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__258__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__line_trace__255__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__258__trace);
    } else if ((3U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__259__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__259__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__line_trace__255__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__259__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__259__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__259__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__259__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__259__str[
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
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__259__str[
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
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__259__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__line_trace__255__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__259__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__line_trace__255__trace_str);
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__line_trace__260__trace_str, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__261__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__261__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__line_trace__260__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__261__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__261__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__261__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__261__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__261__str[
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
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__261__str[
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
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__261__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__line_trace__260__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__261__trace);
    } else if ((1U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__262__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__262__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__line_trace__260__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__262__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__262__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__262__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__262__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__262__str[
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
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__262__str[
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
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__262__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__line_trace__260__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__262__trace);
    } else if ((2U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__263__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__263__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__line_trace__260__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__263__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__263__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__263__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__263__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__263__str[
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
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__263__str[
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
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__263__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__line_trace__260__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__263__trace);
    } else if ((3U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__264__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__264__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__line_trace__260__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__264__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__264__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__264__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__264__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__264__str[
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
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__264__str[
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
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__264__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__line_trace__260__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__264__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__line_trace__260__trace_str);
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__line_trace__265__trace_str, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__266__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__266__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__line_trace__265__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__266__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__266__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__266__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__266__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__266__str[
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
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__266__str[
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
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__266__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__line_trace__265__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__266__trace);
    } else if ((1U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__267__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__267__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__line_trace__265__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__267__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__267__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__267__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__267__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__267__str[
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
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__267__str[
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
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__267__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__line_trace__265__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__267__trace);
    } else if ((2U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__268__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__268__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__line_trace__265__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__268__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__268__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__268__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__268__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__268__str[
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
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__268__str[
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
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__268__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__line_trace__265__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__268__trace);
    } else if ((3U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__269__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__269__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__line_trace__265__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__269__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__269__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__269__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__269__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__269__str[
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
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__269__str[
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
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__269__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__line_trace__265__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__269__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__line_trace__265__trace_str);
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__270__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__270__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__270__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__270__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__271__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__271__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__271__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__271__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__270__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__270__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__270__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__270__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__270__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__270__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__270__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__270__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__270__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__270__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__271__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__271__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__271__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__271__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__271__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__271__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__271__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__271__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__271__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__271__trace);
    }
}
