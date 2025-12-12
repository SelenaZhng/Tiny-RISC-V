// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNetMsg2MemReq_noparam.h for the primary calling header

#include "VNetMsg2MemReq_noparam__pch.h"
#include "VNetMsg2MemReq_noparam___024root.h"

void VNetMsg2MemReq_noparam___024root___ico_sequent__TOP__0(VNetMsg2MemReq_noparam___024root* vlSelf);

void VNetMsg2MemReq_noparam___024root___eval_ico(VNetMsg2MemReq_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetMsg2MemReq_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetMsg2MemReq_noparam___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VNetMsg2MemReq_noparam___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VNetMsg2MemReq_noparam___024root___ico_sequent__TOP__0(VNetMsg2MemReq_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetMsg2MemReq_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetMsg2MemReq_noparam___024root___ico_sequent__TOP__0\n"); );
    // Init
    VlWide<6>/*175:0*/ NetMsg2MemReq_noparam__DOT____Vcellout__v__ostream_msg;
    VL_ZERO_W(176, NetMsg2MemReq_noparam__DOT____Vcellout__v__ostream_msg);
    // Body
    vlSelf->istream_rdy = vlSelf->ostream_rdy;
    vlSelf->ostream_val = vlSelf->istream_val;
    NetMsg2MemReq_noparam__DOT____Vcellout__v__ostream_msg[0U] 
        = vlSelf->istream_msg[0U];
    NetMsg2MemReq_noparam__DOT____Vcellout__v__ostream_msg[1U] 
        = vlSelf->istream_msg[1U];
    NetMsg2MemReq_noparam__DOT____Vcellout__v__ostream_msg[2U] 
        = vlSelf->istream_msg[2U];
    NetMsg2MemReq_noparam__DOT____Vcellout__v__ostream_msg[3U] 
        = vlSelf->istream_msg[3U];
    NetMsg2MemReq_noparam__DOT____Vcellout__v__ostream_msg[4U] 
        = vlSelf->istream_msg[4U];
    NetMsg2MemReq_noparam__DOT____Vcellout__v__ostream_msg[5U] 
        = (0xffffU & vlSelf->istream_msg[5U]);
    NetMsg2MemReq_noparam__DOT____Vcellout__v__ostream_msg[5U] 
        = ((0xf0ffU & NetMsg2MemReq_noparam__DOT____Vcellout__v__ostream_msg[5U]) 
           | (0xf00U & (vlSelf->istream_msg[5U] >> 0x10U)));
    vlSelf->ostream_msg[0U] = NetMsg2MemReq_noparam__DOT____Vcellout__v__ostream_msg[0U];
    vlSelf->ostream_msg[1U] = NetMsg2MemReq_noparam__DOT____Vcellout__v__ostream_msg[1U];
    vlSelf->ostream_msg[2U] = NetMsg2MemReq_noparam__DOT____Vcellout__v__ostream_msg[2U];
    vlSelf->ostream_msg[3U] = NetMsg2MemReq_noparam__DOT____Vcellout__v__ostream_msg[3U];
    vlSelf->ostream_msg[4U] = NetMsg2MemReq_noparam__DOT____Vcellout__v__ostream_msg[4U];
    vlSelf->ostream_msg[5U] = NetMsg2MemReq_noparam__DOT____Vcellout__v__ostream_msg[5U];
}

void VNetMsg2MemReq_noparam___024root___eval_triggers__ico(VNetMsg2MemReq_noparam___024root* vlSelf);

bool VNetMsg2MemReq_noparam___024root___eval_phase__ico(VNetMsg2MemReq_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetMsg2MemReq_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetMsg2MemReq_noparam___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VNetMsg2MemReq_noparam___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VNetMsg2MemReq_noparam___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VNetMsg2MemReq_noparam___024root___eval_act(VNetMsg2MemReq_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetMsg2MemReq_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetMsg2MemReq_noparam___024root___eval_act\n"); );
}

void VNetMsg2MemReq_noparam___024root___eval_nba(VNetMsg2MemReq_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetMsg2MemReq_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetMsg2MemReq_noparam___024root___eval_nba\n"); );
}

void VNetMsg2MemReq_noparam___024root___eval_triggers__act(VNetMsg2MemReq_noparam___024root* vlSelf);

bool VNetMsg2MemReq_noparam___024root___eval_phase__act(VNetMsg2MemReq_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetMsg2MemReq_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetMsg2MemReq_noparam___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VNetMsg2MemReq_noparam___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VNetMsg2MemReq_noparam___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VNetMsg2MemReq_noparam___024root___eval_phase__nba(VNetMsg2MemReq_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetMsg2MemReq_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetMsg2MemReq_noparam___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VNetMsg2MemReq_noparam___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNetMsg2MemReq_noparam___024root___dump_triggers__ico(VNetMsg2MemReq_noparam___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VNetMsg2MemReq_noparam___024root___dump_triggers__nba(VNetMsg2MemReq_noparam___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VNetMsg2MemReq_noparam___024root___dump_triggers__act(VNetMsg2MemReq_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VNetMsg2MemReq_noparam___024root___eval(VNetMsg2MemReq_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetMsg2MemReq_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetMsg2MemReq_noparam___024root___eval\n"); );
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
            VNetMsg2MemReq_noparam___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("lab4_sys/NetMsgAdapters.v", 373, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VNetMsg2MemReq_noparam___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VNetMsg2MemReq_noparam___024root___dump_triggers__nba(vlSelf);
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
                VNetMsg2MemReq_noparam___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("lab4_sys/NetMsgAdapters.v", 373, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VNetMsg2MemReq_noparam___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VNetMsg2MemReq_noparam___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VNetMsg2MemReq_noparam___024root___eval_debug_assertions(VNetMsg2MemReq_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetMsg2MemReq_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetMsg2MemReq_noparam___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->istream_msg[5U] & 0xf0000000U))) {
        Verilated::overWidthError("istream_msg");}
    if (VL_UNLIKELY((vlSelf->istream_val & 0xfeU))) {
        Verilated::overWidthError("istream_val");}
    if (VL_UNLIKELY((vlSelf->ostream_rdy & 0xfeU))) {
        Verilated::overWidthError("ostream_rdy");}
}
#endif  // VL_DEBUG
