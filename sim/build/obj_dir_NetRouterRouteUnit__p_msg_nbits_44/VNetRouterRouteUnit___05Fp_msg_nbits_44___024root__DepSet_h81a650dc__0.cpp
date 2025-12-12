// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNetRouterRouteUnit___05Fp_msg_nbits_44.h for the primary calling header

#include "VNetRouterRouteUnit___05Fp_msg_nbits_44__pch.h"
#include "VNetRouterRouteUnit___05Fp_msg_nbits_44___024root.h"

void VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___ico_sequent__TOP__0(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf);

void VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_ico(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterRouteUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___ico_sequent__TOP__0(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterRouteUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy[0U] 
        = vlSelf->ostream_rdy[0U];
    vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy[1U] 
        = vlSelf->ostream_rdy[1U];
    vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy[2U] 
        = vlSelf->ostream_rdy[2U];
    vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_msg[0U] = 0ULL;
    vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_msg[1U] = 0ULL;
    vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_msg[2U] = 0ULL;
    vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_val[0U] = 0U;
    vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_val[1U] = 0U;
    vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_val[2U] = 0U;
    vlSelf->istream_rdy = 0U;
    if (vlSelf->istream_val) {
        if (((3U & (IData)((vlSelf->istream_msg >> 0x28U))) 
             == (3U & (IData)(vlSelf->router_id)))) {
            vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_msg[0U] 
                = vlSelf->istream_msg;
            vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_val[0U] = 1U;
            vlSelf->istream_rdy = vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy
                [0U];
        } else {
            vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_msg[1U] 
                = vlSelf->istream_msg;
            vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_val[1U] = 1U;
            vlSelf->istream_rdy = vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy
                [1U];
        }
    }
    vlSelf->ostream_msg[0U] = vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_msg
        [0U];
    vlSelf->ostream_msg[1U] = vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_msg
        [1U];
    vlSelf->ostream_msg[2U] = vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_msg
        [2U];
    vlSelf->ostream_val[0U] = vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_val
        [0U];
    vlSelf->ostream_val[1U] = vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_val
        [1U];
    vlSelf->ostream_val[2U] = vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_val
        [2U];
}

void VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_triggers__ico(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf);

bool VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_phase__ico(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterRouteUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_act(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterRouteUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_act\n"); );
}

void VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_nba(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterRouteUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_nba\n"); );
}

void VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_triggers__act(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf);

bool VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_phase__act(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterRouteUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_phase__nba(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterRouteUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___dump_triggers__ico(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___dump_triggers__nba(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___dump_triggers__act(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf);
#endif  // VL_DEBUG

void VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterRouteUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval\n"); );
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
            VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("lab4_sys/NetRouterRouteUnit.v", 104, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("lab4_sys/NetRouterRouteUnit.v", 104, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("lab4_sys/NetRouterRouteUnit.v", 104, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_debug_assertions(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterRouteUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->router_id & 0xf0U))) {
        Verilated::overWidthError("router_id");}
    if (VL_UNLIKELY((vlSelf->istream_msg & 0ULL))) {
        Verilated::overWidthError("istream_msg");}
    if (VL_UNLIKELY((vlSelf->istream_val & 0xfeU))) {
        Verilated::overWidthError("istream_val");}
}
#endif  // VL_DEBUG
