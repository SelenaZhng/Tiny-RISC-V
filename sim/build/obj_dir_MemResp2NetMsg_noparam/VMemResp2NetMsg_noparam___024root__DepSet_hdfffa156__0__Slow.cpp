// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMemResp2NetMsg_noparam.h for the primary calling header

#include "VMemResp2NetMsg_noparam__pch.h"
#include "VMemResp2NetMsg_noparam___024root.h"

VL_ATTR_COLD void VMemResp2NetMsg_noparam___024root___eval_static(VMemResp2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemResp2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemResp2NetMsg_noparam___024root___eval_static\n"); );
}

VL_ATTR_COLD void VMemResp2NetMsg_noparam___024root___eval_initial(VMemResp2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemResp2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemResp2NetMsg_noparam___024root___eval_initial\n"); );
}

VL_ATTR_COLD void VMemResp2NetMsg_noparam___024root___eval_final(VMemResp2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemResp2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemResp2NetMsg_noparam___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMemResp2NetMsg_noparam___024root___dump_triggers__stl(VMemResp2NetMsg_noparam___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VMemResp2NetMsg_noparam___024root___eval_phase__stl(VMemResp2NetMsg_noparam___024root* vlSelf);

VL_ATTR_COLD void VMemResp2NetMsg_noparam___024root___eval_settle(VMemResp2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemResp2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemResp2NetMsg_noparam___024root___eval_settle\n"); );
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
            VMemResp2NetMsg_noparam___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("lab4_sys/NetMsgAdapters.v", 373, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VMemResp2NetMsg_noparam___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMemResp2NetMsg_noparam___024root___dump_triggers__stl(VMemResp2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemResp2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemResp2NetMsg_noparam___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VMemResp2NetMsg_noparam___024root___ico_sequent__TOP__0(VMemResp2NetMsg_noparam___024root* vlSelf);

VL_ATTR_COLD void VMemResp2NetMsg_noparam___024root___eval_stl(VMemResp2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemResp2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemResp2NetMsg_noparam___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VMemResp2NetMsg_noparam___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VMemResp2NetMsg_noparam___024root___eval_triggers__stl(VMemResp2NetMsg_noparam___024root* vlSelf);

VL_ATTR_COLD bool VMemResp2NetMsg_noparam___024root___eval_phase__stl(VMemResp2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemResp2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemResp2NetMsg_noparam___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VMemResp2NetMsg_noparam___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VMemResp2NetMsg_noparam___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMemResp2NetMsg_noparam___024root___dump_triggers__ico(VMemResp2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemResp2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemResp2NetMsg_noparam___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VMemResp2NetMsg_noparam___024root___dump_triggers__act(VMemResp2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemResp2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemResp2NetMsg_noparam___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VMemResp2NetMsg_noparam___024root___dump_triggers__nba(VMemResp2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemResp2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemResp2NetMsg_noparam___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMemResp2NetMsg_noparam___024root___ctor_var_reset(VMemResp2NetMsg_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemResp2NetMsg_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemResp2NetMsg_noparam___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(146, vlSelf->istream_msg);
    vlSelf->istream_rdy = VL_RAND_RESET_I(1);
    vlSelf->istream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->ostream_msg);
    vlSelf->ostream_rdy = VL_RAND_RESET_I(1);
    vlSelf->ostream_val = VL_RAND_RESET_I(1);
}
