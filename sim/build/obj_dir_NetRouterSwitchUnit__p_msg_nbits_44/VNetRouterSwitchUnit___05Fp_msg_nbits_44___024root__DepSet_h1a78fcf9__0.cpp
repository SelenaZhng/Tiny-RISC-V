// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNetRouterSwitchUnit___05Fp_msg_nbits_44.h for the primary calling header

#include "VNetRouterSwitchUnit___05Fp_msg_nbits_44__pch.h"
#include "VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root.h"

void VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___ico_sequent__TOP__0(VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root* vlSelf);

void VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_ico(VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterSwitchUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___ico_sequent__TOP__0(VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterSwitchUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_msg[0U] 
        = vlSelf->istream_msg[0U];
    vlSelf->NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_msg[1U] 
        = vlSelf->istream_msg[1U];
    vlSelf->NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_msg[2U] 
        = vlSelf->istream_msg[2U];
    vlSelf->NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val[0U] 
        = vlSelf->istream_val[0U];
    vlSelf->NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val[1U] 
        = vlSelf->istream_val[1U];
    vlSelf->NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val[2U] 
        = vlSelf->istream_val[2U];
    vlSelf->ostream_val = 0U;
    vlSelf->ostream_msg = 0ULL;
    vlSelf->NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy[0U] = 0U;
    vlSelf->NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy[1U] = 0U;
    vlSelf->NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy[2U] = 0U;
    if (vlSelf->NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val
        [1U]) {
        vlSelf->ostream_val = 1U;
        vlSelf->ostream_msg = vlSelf->NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_msg
            [1U];
        vlSelf->NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy[1U] 
            = vlSelf->ostream_rdy;
    } else if (vlSelf->NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val
               [2U]) {
        vlSelf->ostream_val = 1U;
        vlSelf->ostream_msg = vlSelf->NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_msg
            [2U];
        vlSelf->NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy[2U] 
            = vlSelf->ostream_rdy;
    } else if (vlSelf->NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val
               [0U]) {
        vlSelf->ostream_val = 1U;
        vlSelf->ostream_msg = vlSelf->NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_msg
            [0U];
        vlSelf->NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy[0U] 
            = vlSelf->ostream_rdy;
    }
    vlSelf->istream_rdy[0U] = vlSelf->NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy
        [0U];
    vlSelf->istream_rdy[1U] = vlSelf->NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy
        [1U];
    vlSelf->istream_rdy[2U] = vlSelf->NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy
        [2U];
}

void VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_triggers__ico(VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root* vlSelf);

bool VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_phase__ico(VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterSwitchUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_act(VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterSwitchUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_act\n"); );
}

void VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_nba(VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterSwitchUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_nba\n"); );
}

void VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_triggers__act(VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root* vlSelf);

bool VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_phase__act(VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterSwitchUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_phase__nba(VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterSwitchUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___dump_triggers__ico(VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___dump_triggers__nba(VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___dump_triggers__act(VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root* vlSelf);
#endif  // VL_DEBUG

void VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval(VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterSwitchUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval\n"); );
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
            VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("lab4_sys/NetRouterSwitchUnit.v", 95, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("lab4_sys/NetRouterSwitchUnit.v", 95, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("lab4_sys/NetRouterSwitchUnit.v", 95, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_debug_assertions(VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterSwitchUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->ostream_rdy & 0xfeU))) {
        Verilated::overWidthError("ostream_rdy");}
}
#endif  // VL_DEBUG
