// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMemReq2NetMsg_noparam.h for the primary calling header

#include "VMemReq2NetMsg_noparam__pch.h"
#include "VMemReq2NetMsg_noparam___024root.h"

void VMemReq2NetMsg_noparam___024root___ico_sequent__TOP__0(VMemReq2NetMsg_noparam___024root* vlSelf);

void VMemReq2NetMsg_noparam___024root___eval_ico(VMemReq2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemReq2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemReq2NetMsg_noparam___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VMemReq2NetMsg_noparam___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VMemReq2NetMsg_noparam___024root___ico_sequent__TOP__0(VMemReq2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemReq2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemReq2NetMsg_noparam___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->istream_rdy = vlSelf->ostream_rdy;
    vlSelf->ostream_val = vlSelf->istream_val;
    vlSelf->ostream_msg[0U] = vlSelf->istream_msg[0U];
    vlSelf->ostream_msg[1U] = vlSelf->istream_msg[1U];
    vlSelf->ostream_msg[2U] = vlSelf->istream_msg[2U];
    vlSelf->ostream_msg[3U] = vlSelf->istream_msg[3U];
    vlSelf->ostream_msg[4U] = vlSelf->istream_msg[4U];
    vlSelf->ostream_msg[5U] = (((IData)(vlSelf->src_id) 
                                << 0x1aU) | vlSelf->istream_msg[5U]);
}

void VMemReq2NetMsg_noparam___024root___eval_triggers__ico(VMemReq2NetMsg_noparam___024root* vlSelf);

bool VMemReq2NetMsg_noparam___024root___eval_phase__ico(VMemReq2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemReq2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemReq2NetMsg_noparam___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VMemReq2NetMsg_noparam___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VMemReq2NetMsg_noparam___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VMemReq2NetMsg_noparam___024root___eval_act(VMemReq2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemReq2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemReq2NetMsg_noparam___024root___eval_act\n"); );
}

void VMemReq2NetMsg_noparam___024root___eval_nba(VMemReq2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemReq2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemReq2NetMsg_noparam___024root___eval_nba\n"); );
}

void VMemReq2NetMsg_noparam___024root___eval_triggers__act(VMemReq2NetMsg_noparam___024root* vlSelf);

bool VMemReq2NetMsg_noparam___024root___eval_phase__act(VMemReq2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemReq2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemReq2NetMsg_noparam___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VMemReq2NetMsg_noparam___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VMemReq2NetMsg_noparam___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VMemReq2NetMsg_noparam___024root___eval_phase__nba(VMemReq2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemReq2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemReq2NetMsg_noparam___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VMemReq2NetMsg_noparam___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMemReq2NetMsg_noparam___024root___dump_triggers__ico(VMemReq2NetMsg_noparam___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMemReq2NetMsg_noparam___024root___dump_triggers__nba(VMemReq2NetMsg_noparam___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMemReq2NetMsg_noparam___024root___dump_triggers__act(VMemReq2NetMsg_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VMemReq2NetMsg_noparam___024root___eval(VMemReq2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemReq2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemReq2NetMsg_noparam___024root___eval\n"); );
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
            VMemReq2NetMsg_noparam___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("lab4_sys/NetMsgAdapters.v", 373, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VMemReq2NetMsg_noparam___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VMemReq2NetMsg_noparam___024root___dump_triggers__nba(vlSelf);
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
                VMemReq2NetMsg_noparam___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("lab4_sys/NetMsgAdapters.v", 373, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VMemReq2NetMsg_noparam___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VMemReq2NetMsg_noparam___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VMemReq2NetMsg_noparam___024root___eval_debug_assertions(VMemReq2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemReq2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemReq2NetMsg_noparam___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->src_id & 0xfcU))) {
        Verilated::overWidthError("src_id");}
    if (VL_UNLIKELY((vlSelf->istream_msg[5U] & 0xffff0000U))) {
        Verilated::overWidthError("istream_msg");}
    if (VL_UNLIKELY((vlSelf->istream_val & 0xfeU))) {
        Verilated::overWidthError("istream_val");}
    if (VL_UNLIKELY((vlSelf->ostream_rdy & 0xfeU))) {
        Verilated::overWidthError("ostream_rdy");}
}
#endif  // VL_DEBUG
