// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNetRouterRouteUnit___05Fp_msg_nbits_44.h for the primary calling header

#include "VNetRouterRouteUnit___05Fp_msg_nbits_44__pch.h"
#include "VNetRouterRouteUnit___05Fp_msg_nbits_44___024root.h"

VL_ATTR_COLD void VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_static(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterRouteUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_static\n"); );
}

VL_ATTR_COLD void VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_initial(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterRouteUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_initial\n"); );
}

VL_ATTR_COLD void VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_final(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterRouteUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___dump_triggers__stl(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_phase__stl(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf);

VL_ATTR_COLD void VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_settle(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterRouteUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("lab4_sys/NetRouterRouteUnit.v", 104, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___dump_triggers__stl(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterRouteUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___ico_sequent__TOP__0(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf);

VL_ATTR_COLD void VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_stl(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterRouteUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_triggers__stl(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf);

VL_ATTR_COLD bool VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_phase__stl(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterRouteUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___dump_triggers__ico(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterRouteUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: Internal 'ico' trigger - DPI export trigger\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___dump_triggers__act(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterRouteUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: Internal 'act' trigger - DPI export trigger\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___dump_triggers__nba(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterRouteUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: Internal 'nba' trigger - DPI export trigger\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___ctor_var_reset(VNetRouterRouteUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterRouteUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterRouteUnit___05Fp_msg_nbits_44___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->router_id = VL_RAND_RESET_I(4);
    vlSelf->istream_msg = VL_RAND_RESET_Q(44);
    vlSelf->istream_rdy = VL_RAND_RESET_I(1);
    vlSelf->istream_val = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ostream_msg[__Vi0] = VL_RAND_RESET_Q(44);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_msg[__Vi0] = VL_RAND_RESET_Q(44);
    }
    VL_RAND_RESET_W(4096, vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT__v__DOT__str);
    vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->NetRouterRouteUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdpi_export_trigger = 0;
}
