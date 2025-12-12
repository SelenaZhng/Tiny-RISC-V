// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMemNet_noparam.h for the primary calling header

#include "VMemNet_noparam__pch.h"
#include "VMemNet_noparam___024root.h"

VL_ATTR_COLD void VMemNet_noparam___024root___eval_triggers__stl(VMemNet_noparam___024root* vlSelf);
VL_ATTR_COLD void VMemNet_noparam___024root___eval_stl(VMemNet_noparam___024root* vlSelf);

VL_ATTR_COLD bool VMemNet_noparam___024root___eval_phase__stl(VMemNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VMemNet_noparam___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VMemNet_noparam___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMemNet_noparam___024root___dump_triggers__ico(VMemNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VMemNet_noparam___024root___dump_triggers__act(VMemNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: Internal 'act' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VMemNet_noparam___024root___dump_triggers__nba(VMemNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: Internal 'nba' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMemNet_noparam___024root___ctor_var_reset(VMemNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(176, vlSelf->cache2net_reqstream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->cache2net_reqstream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->cache2net_reqstream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(146, vlSelf->cache2net_respstream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->cache2net_respstream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->cache2net_respstream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(176, vlSelf->net2mem_reqstream_msg);
    vlSelf->net2mem_reqstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->net2mem_reqstream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(146, vlSelf->net2mem_respstream_msg);
    vlSelf->net2mem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->net2mem_respstream_val = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_respstream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(146, vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_reqstream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(176, vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__runit0__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__runit1__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__runit2__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__ostream0_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__ostream0_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__ostream1_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__ostream2_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__ostream0_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__ostream1_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__ostream2_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
