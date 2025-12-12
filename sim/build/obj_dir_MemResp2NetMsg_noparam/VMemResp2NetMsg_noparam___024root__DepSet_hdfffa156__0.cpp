// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMemResp2NetMsg_noparam.h for the primary calling header

#include "VMemResp2NetMsg_noparam__pch.h"
#include "VMemResp2NetMsg_noparam___024root.h"

void VMemResp2NetMsg_noparam___024root___ico_sequent__TOP__0(VMemResp2NetMsg_noparam___024root* vlSelf);

void VMemResp2NetMsg_noparam___024root___eval_ico(VMemResp2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemResp2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemResp2NetMsg_noparam___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VMemResp2NetMsg_noparam___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VMemResp2NetMsg_noparam___024root___ico_sequent__TOP__0(VMemResp2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemResp2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemResp2NetMsg_noparam___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ostream_msg[0U] = vlSelf->istream_msg[0U];
    vlSelf->ostream_msg[1U] = vlSelf->istream_msg[1U];
    vlSelf->ostream_msg[2U] = vlSelf->istream_msg[2U];
    vlSelf->ostream_msg[3U] = vlSelf->istream_msg[3U];
    vlSelf->ostream_msg[4U] = ((0x30000000U & (vlSelf->istream_msg[4U] 
                                               << 0x12U)) 
                               | ((0xc000000U & (vlSelf->istream_msg[4U] 
                                                 << 0xeU)) 
                                  | vlSelf->istream_msg[4U]));
    vlSelf->istream_rdy = vlSelf->ostream_rdy;
    vlSelf->ostream_val = vlSelf->istream_val;
}

void VMemResp2NetMsg_noparam___024root___eval_triggers__ico(VMemResp2NetMsg_noparam___024root* vlSelf);

bool VMemResp2NetMsg_noparam___024root___eval_phase__ico(VMemResp2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemResp2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemResp2NetMsg_noparam___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VMemResp2NetMsg_noparam___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VMemResp2NetMsg_noparam___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VMemResp2NetMsg_noparam___024root___eval_act(VMemResp2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemResp2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemResp2NetMsg_noparam___024root___eval_act\n"); );
}

void VMemResp2NetMsg_noparam___024root___eval_nba(VMemResp2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemResp2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemResp2NetMsg_noparam___024root___eval_nba\n"); );
}

void VMemResp2NetMsg_noparam___024root___eval_triggers__act(VMemResp2NetMsg_noparam___024root* vlSelf);

bool VMemResp2NetMsg_noparam___024root___eval_phase__act(VMemResp2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemResp2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemResp2NetMsg_noparam___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VMemResp2NetMsg_noparam___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VMemResp2NetMsg_noparam___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VMemResp2NetMsg_noparam___024root___eval_phase__nba(VMemResp2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemResp2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemResp2NetMsg_noparam___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VMemResp2NetMsg_noparam___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMemResp2NetMsg_noparam___024root___dump_triggers__ico(VMemResp2NetMsg_noparam___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMemResp2NetMsg_noparam___024root___dump_triggers__nba(VMemResp2NetMsg_noparam___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMemResp2NetMsg_noparam___024root___dump_triggers__act(VMemResp2NetMsg_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VMemResp2NetMsg_noparam___024root___eval(VMemResp2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemResp2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemResp2NetMsg_noparam___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VMemResp2NetMsg_noparam___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("lab4_sys/NetMsgAdapters.v", 373, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VMemResp2NetMsg_noparam___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VMemResp2NetMsg_noparam___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("lab4_sys/NetMsgAdapters.v", 373, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VMemResp2NetMsg_noparam___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("lab4_sys/NetMsgAdapters.v", 373, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VMemResp2NetMsg_noparam___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VMemResp2NetMsg_noparam___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VMemResp2NetMsg_noparam___024root___eval_debug_assertions(VMemResp2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemResp2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemResp2NetMsg_noparam___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->istream_msg[4U] & 0xfffc0000U))) {
        Verilated::overWidthError("istream_msg");}
    if (VL_UNLIKELY((vlSelf->istream_val & 0xfeU))) {
        Verilated::overWidthError("istream_val");}
    if (VL_UNLIKELY((vlSelf->ostream_rdy & 0xfeU))) {
        Verilated::overWidthError("ostream_rdy");}
}
#endif  // VL_DEBUG
