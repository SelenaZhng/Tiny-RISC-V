// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiCoreSys_noparam.h for the primary calling header

#include "VMultiCoreSys_noparam__pch.h"
#include "VMultiCoreSys_noparam___024root.h"

VL_ATTR_COLD void VMultiCoreSys_noparam___024root___eval_triggers__stl(VMultiCoreSys_noparam___024root* vlSelf);
VL_ATTR_COLD void VMultiCoreSys_noparam___024root___eval_stl(VMultiCoreSys_noparam___024root* vlSelf);

VL_ATTR_COLD bool VMultiCoreSys_noparam___024root___eval_phase__stl(VMultiCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VMultiCoreSys_noparam___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VMultiCoreSys_noparam___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMultiCoreSys_noparam___024root___dump_triggers__ico(VMultiCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VMultiCoreSys_noparam___024root___dump_triggers__act(VMultiCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root___dump_triggers__act\n"); );
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
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VMultiCoreSys_noparam___024root___dump_triggers__nba(VMultiCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root___dump_triggers__nba\n"); );
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
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMultiCoreSys_noparam___024root___ctor_var_reset(VMultiCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->commit_inst = VL_RAND_RESET_I(4);
    vlSelf->dcache_access = VL_RAND_RESET_I(4);
    vlSelf->dcache_miss = VL_RAND_RESET_I(4);
    vlSelf->icache_access = VL_RAND_RESET_I(4);
    vlSelf->icache_miss = VL_RAND_RESET_I(4);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->stats_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(176, vlSelf->dmem_reqstream_msg);
    vlSelf->dmem_reqstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->dmem_reqstream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(146, vlSelf->dmem_respstream_msg);
    vlSelf->dmem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->dmem_respstream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(176, vlSelf->imem_reqstream_msg);
    vlSelf->imem_reqstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->imem_reqstream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(146, vlSelf->imem_respstream_msg);
    vlSelf->imem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->imem_respstream_val = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mngr2proc_msg[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mngr2proc_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mngr2proc_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->proc2mngr_msg[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->proc2mngr_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->proc2mngr_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT____Vcellout__v__proc2mngr_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT____Vcellinp__v__proc2mngr_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT____Vcellout__v__proc2mngr_msg[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT____Vcellinp__v__mngr2proc_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT____Vcellout__v__mngr2proc_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT____Vcellinp__v__mngr2proc_msg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__0__KET____DOT__icache__cache2mem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__0__KET____DOT__icache__cache2mem_reqstream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(176, vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__0__KET____DOT__icache__cache2mem_reqstream_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__0__KET____DOT__icache__proc2cache_respstream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__0__KET____DOT__icache__proc2cache_reqstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__1__KET____DOT__icache__cache2mem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__1__KET____DOT__icache__cache2mem_reqstream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(176, vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__1__KET____DOT__icache__cache2mem_reqstream_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__1__KET____DOT__icache__proc2cache_respstream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__1__KET____DOT__icache__proc2cache_reqstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__2__KET____DOT__icache__cache2mem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__2__KET____DOT__icache__cache2mem_reqstream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(176, vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__2__KET____DOT__icache__cache2mem_reqstream_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__2__KET____DOT__icache__proc2cache_respstream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__2__KET____DOT__icache__proc2cache_reqstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__3__KET____DOT__icache__cache2mem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__3__KET____DOT__icache__cache2mem_reqstream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(176, vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__3__KET____DOT__icache__cache2mem_reqstream_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__3__KET____DOT__icache__proc2cache_respstream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__3__KET____DOT__icache__proc2cache_reqstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__0__KET____DOT__proc__commit_inst = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__0__KET____DOT__proc__dmem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__0__KET____DOT__proc__dmem_reqstream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__0__KET____DOT__proc__imem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__0__KET____DOT__proc__imem_reqstream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__0__KET____DOT__proc__proc2mngr_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__1__KET____DOT__proc__commit_inst = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__1__KET____DOT__proc__dmem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__1__KET____DOT__proc__dmem_reqstream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__1__KET____DOT__proc__imem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__1__KET____DOT__proc__imem_reqstream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__1__KET____DOT__proc__proc2mngr_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__2__KET____DOT__proc__commit_inst = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__2__KET____DOT__proc__dmem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__2__KET____DOT__proc__dmem_reqstream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__2__KET____DOT__proc__imem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__2__KET____DOT__proc__imem_reqstream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__2__KET____DOT__proc__proc2mngr_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__3__KET____DOT__proc__commit_inst = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__3__KET____DOT__proc__dmem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__3__KET____DOT__proc__dmem_reqstream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__3__KET____DOT__proc__imem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__3__KET____DOT__proc__imem_reqstream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__3__KET____DOT__proc__proc2mngr_val = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memresp2netmsg_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memresp2netmsg_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memresp2netmsg_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(146, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__0__KET____DOT__netmsg2memresp__ostream_msg);
    VL_RAND_RESET_W(146, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg);
    VL_RAND_RESET_W(146, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg);
    VL_RAND_RESET_W(146, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__channels_cw_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__channels_cw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__channels_cw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__channels_ccw_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__channels_ccw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__channels_ccw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router0__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellout__router0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router1__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellout__router1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router2__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellout__router2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router3__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellout__router3__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__runit0__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__runit1__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__runit2__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__channels_cw_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__channels_cw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__channels_cw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__channels_ccw_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__channels_ccw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__channels_ccw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellout__router0__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellout__router0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellout__router1__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellout__router1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellout__router2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellout__router3__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router3__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__cache2mem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__cache2mem_reqstream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(176, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__cache2mem_reqstream_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__proc2cache_respstream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__proc2cache_reqstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__cache2mem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__cache2mem_reqstream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(176, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__cache2mem_reqstream_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__proc2cache_respstream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__proc2cache_reqstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__cache2mem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__cache2mem_reqstream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(176, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__cache2mem_reqstream_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__proc2cache_respstream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__proc2cache_reqstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__cache2mem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__cache2mem_reqstream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(176, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__cache2mem_reqstream_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__proc2cache_respstream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__proc2cache_reqstream_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereq2netmsg_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereq2netmsg_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereq2netmsg_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacheresp2netmsg_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacheresp2netmsg_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacheresp2netmsg_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(78, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__0__KET____DOT__netmsg2cachereq__ostream_msg);
    VL_RAND_RESET_W(78, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__1__KET____DOT__netmsg2cachereq__ostream_msg);
    VL_RAND_RESET_W(78, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__2__KET____DOT__netmsg2cachereq__ostream_msg);
    VL_RAND_RESET_W(78, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__3__KET____DOT__netmsg2cachereq__ostream_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__0__KET____DOT__netmsg2cacheresp__ostream_msg = VL_RAND_RESET_Q(48);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__1__KET____DOT__netmsg2cacheresp__ostream_msg = VL_RAND_RESET_Q(48);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__2__KET____DOT__netmsg2cacheresp__ostream_msg = VL_RAND_RESET_Q(48);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__3__KET____DOT__netmsg2cacheresp__ostream_msg = VL_RAND_RESET_Q(48);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router0__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router1__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router2__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router3__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router3__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit0__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit1__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit2__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit1__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit2__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit0__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit1__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit2__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__channels_ccw_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__channels_ccw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__channels_ccw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router0__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router0__ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router0__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router1__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router1__ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router1__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router2__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router2__ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router2__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router3__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router3__ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router3__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router3__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router3__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0_deq_msg = VL_RAND_RESET_Q(60);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1_deq_msg = VL_RAND_RESET_Q(60);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2_deq_msg = VL_RAND_RESET_Q(60);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0_deq_msg = VL_RAND_RESET_Q(60);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1_deq_msg = VL_RAND_RESET_Q(60);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2_deq_msg = VL_RAND_RESET_Q(60);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0_deq_msg = VL_RAND_RESET_Q(60);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1_deq_msg = VL_RAND_RESET_Q(60);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2_deq_msg = VL_RAND_RESET_Q(60);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0_deq_msg = VL_RAND_RESET_Q(60);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1_deq_msg = VL_RAND_RESET_Q(60);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2_deq_msg = VL_RAND_RESET_Q(60);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memresp2netmsg_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memresp2netmsg_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memresp2netmsg_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(146, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__0__KET____DOT__netmsg2memresp__ostream_msg);
    VL_RAND_RESET_W(146, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg);
    VL_RAND_RESET_W(146, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg);
    VL_RAND_RESET_W(146, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__channels_cw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__channels_cw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit0__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit1__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit2__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__channels_cw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__channels_cw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router0__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router1__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cachereq_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__memresp_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__write_data_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__wben_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__data_array_ren = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__data_array_wen = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__tag_array_ren = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__tag_array_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__tag_array_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__read_data_reg_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__read_data_zero_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__evict_addr_reg_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__mem_req_addr_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__memreq_type = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_out = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__2 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__use_bits__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_opaque_reg_out = VL_RAND_RESET_I(8);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__wben_mux_out = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__tag_array0_out = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__tag_array1_out = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__evict_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__active_way = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__tag_array_way0__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__tag_array_way1__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__data_array_way0__DOT__mem[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__data_array_way1__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cachereq_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__memresp_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__write_data_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__wben_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__data_array_ren = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__data_array_wen = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__tag_array_ren = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__tag_array_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__tag_array_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__read_data_reg_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__read_data_zero_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__evict_addr_reg_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__mem_req_addr_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__memreq_type = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_out = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__2 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__use_bits__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_opaque_reg_out = VL_RAND_RESET_I(8);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__wben_mux_out = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__tag_array0_out = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__tag_array1_out = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__evict_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__active_way = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__tag_array_way0__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__tag_array_way1__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__data_array_way0__DOT__mem[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__data_array_way1__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cachereq_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__memresp_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__write_data_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__wben_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__data_array_ren = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__data_array_wen = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__tag_array_ren = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__tag_array_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__tag_array_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__read_data_reg_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__read_data_zero_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__evict_addr_reg_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__mem_req_addr_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__memreq_type = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_out = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__2 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__use_bits__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_opaque_reg_out = VL_RAND_RESET_I(8);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__wben_mux_out = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__tag_array0_out = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__tag_array1_out = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__evict_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__active_way = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__tag_array_way0__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__tag_array_way1__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__data_array_way0__DOT__mem[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__data_array_way1__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cachereq_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__memresp_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__write_data_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__wben_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__data_array_ren = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__data_array_wen = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__tag_array_ren = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__tag_array_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__tag_array_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__read_data_reg_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__read_data_zero_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__evict_addr_reg_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__mem_req_addr_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__memreq_type = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_out = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__2 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__use_bits__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_opaque_reg_out = VL_RAND_RESET_I(8);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__wben_mux_out = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__tag_array0_out = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__tag_array1_out = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__evict_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__active_way = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__tag_array_way0__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__tag_array_way1__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__data_array_way0__DOT__mem[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__data_array_way1__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__cachereq_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__memresp_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__write_data_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__wben_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__data_array_ren = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__data_array_wen = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__tag_array_ren = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__tag_array_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__tag_array_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__read_data_reg_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__read_data_zero_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__evict_addr_reg_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__mem_req_addr_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__memreq_type = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_w0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_w1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wen = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__victim_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_out = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__use_bits__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_data_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__wben_mux_out = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__memresp_data_reg_out);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__tag_array0_out = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__tag_array1_out = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__evict_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__active_way = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__tag_array_way0__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__tag_array_way1__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__data_array_way0__DOT__mem[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__data_array_way1__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__proc2cache_respstream_trace__DOT__data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__proc2cache_respstream_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__cachereq_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__memresp_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__write_data_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__wben_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__data_array_ren = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__data_array_wen = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__tag_array_ren = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__tag_array_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__tag_array_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__read_data_reg_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__read_data_zero_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__evict_addr_reg_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__mem_req_addr_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__memreq_type = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_w0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_w1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wen = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__victim_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_out = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__use_bits__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_data_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__wben_mux_out = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__memresp_data_reg_out);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__tag_array0_out = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__tag_array1_out = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__evict_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__active_way = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__tag_array_way0__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__tag_array_way1__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__data_array_way0__DOT__mem[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__data_array_way1__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__proc2cache_respstream_trace__DOT__data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__proc2cache_respstream_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__cachereq_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__memresp_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__write_data_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__wben_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__data_array_ren = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__data_array_wen = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__tag_array_ren = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__tag_array_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__tag_array_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__read_data_reg_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__read_data_zero_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__evict_addr_reg_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__mem_req_addr_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__memreq_type = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_w0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_w1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wen = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__victim_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_out = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__use_bits__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_data_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__wben_mux_out = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__memresp_data_reg_out);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__tag_array0_out = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__tag_array1_out = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__evict_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__active_way = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__tag_array_way0__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__tag_array_way1__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__data_array_way0__DOT__mem[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__data_array_way1__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__proc2cache_respstream_trace__DOT__data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__proc2cache_respstream_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__cachereq_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__memresp_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__write_data_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__wben_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__data_array_ren = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__data_array_wen = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__tag_array_ren = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__tag_array_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__tag_array_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__read_data_reg_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__read_data_zero_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__evict_addr_reg_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__mem_req_addr_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__memreq_type = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_w0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_w1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wen = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__victim_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_out = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__use_bits__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_data_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__wben_mux_out = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__memresp_data_reg_out);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__tag_array0_out = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__tag_array1_out = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__evict_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__active_way = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__tag_array_way0__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__tag_array_way1__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__data_array_way0__DOT__mem[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__data_array_way1__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__proc2cache_respstream_trace__DOT__data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__proc2cache_respstream_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(78, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_respstream_drop_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(78, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_reqstream_enq_msg);
    VL_RAND_RESET_W(78, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT____Vcellout__dmem_queue__deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__reg_en_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__op1_sel_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__op2_sel_D = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__csrr_sel_D = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imm_type_D = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__op1_byp_sel_D = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__op2_byp_sel_D = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ex_result_sel_X = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__alu_fn_X = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__wb_result_sel_M = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__rf_waddr_W = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__rf_wen_W = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imul_req_rdy_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imul_req_val_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imul_resp_rdy_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imul_resp_val_X = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(78, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(78, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__val_F = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__val_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__val_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__val_M = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__val_W = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__ostall_W = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__stall_F = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__stall_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__stall_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__stall_M = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__stall_W = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__osquash_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__squash_F = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__squash_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__pc_redirect_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__pc_sel_X = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__rs1_en_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__rs2_en_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__wb_result_sel_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__csrr_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__csrw_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__proc2mngr_val_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__mngr2proc_rdy_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__stats_en_wen_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__inst_X = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_X = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__wb_result_sel_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_X = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__proc2mngr_val_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__stats_en_wen_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__br_type_X = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__next_val_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__inst_M = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_M = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_M = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_M = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__proc2mngr_val_M = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__stats_en_wen_M = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__next_val_M = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__inst_W = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__proc2mngr_val_W = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_pending_W = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__stats_en_wen_pending_W = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_7 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_8 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_11 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_14 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_15 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_17 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_22 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_23 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__pc_F = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__pc_next_F = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__br_target_X = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__jal_target_D = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__dmem_write_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__alu_result_X = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__pc_D = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imm_D = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op2_D = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__pc_reg_X_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op1_sel_mux_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op2_byp_out_D = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op1_X = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op2_X = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__ex_result_X = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul_resp_msg = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__ex_result_M = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__wb_result_M = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__wb_result_W = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__stats_en_W = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__b_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__a_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_mux_in0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__a_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__a_mux_in0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__add_mux_output = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__tinyrv2__DOT__rs1_str = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__tinyrv2__DOT__rs2_str = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__tinyrv2__DOT__rd_str = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(72, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__tinyrv2__DOT__csr_str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__tinyrv2__DOT__funct_str = VL_RAND_RESET_I(16);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__tinyrv2__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__tinyrv2__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__tinyrv2__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__tinyrv2__DOT__csr = VL_RAND_RESET_I(12);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__tinyrv2__DOT__funct = VL_RAND_RESET_I(7);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_reqstream_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_reqstream_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_respstream_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_respstream_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(78, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_respstream_drop_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(78, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_reqstream_enq_msg);
    VL_RAND_RESET_W(78, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT____Vcellout__dmem_queue__deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__reg_en_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__op1_sel_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__op2_sel_D = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__csrr_sel_D = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imm_type_D = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__op1_byp_sel_D = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__op2_byp_sel_D = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ex_result_sel_X = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__alu_fn_X = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__wb_result_sel_M = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__rf_waddr_W = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__rf_wen_W = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imul_req_rdy_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imul_req_val_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imul_resp_rdy_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imul_resp_val_X = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(78, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(78, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__val_F = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__val_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__val_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__val_M = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__val_W = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__ostall_W = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__stall_F = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__stall_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__stall_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__stall_M = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__stall_W = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__osquash_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__squash_F = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__squash_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__pc_redirect_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__pc_sel_X = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__rs1_en_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__rs2_en_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__wb_result_sel_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__csrr_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__csrw_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__proc2mngr_val_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__mngr2proc_rdy_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__inst_X = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_X = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__wb_result_sel_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_X = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__proc2mngr_val_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__br_type_X = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__next_val_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__inst_M = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_M = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_M = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_M = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__proc2mngr_val_M = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__next_val_M = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__inst_W = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__proc2mngr_val_W = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_pending_W = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_7 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_8 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_11 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_14 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_15 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_17 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_22 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_23 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__pc_F = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__pc_next_F = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__br_target_X = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__jal_target_D = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__dmem_write_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__alu_result_X = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__pc_D = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imm_D = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op2_D = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__pc_reg_X_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op1_sel_mux_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op2_byp_out_D = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op1_X = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op2_X = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__ex_result_X = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul_resp_msg = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__ex_result_M = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__wb_result_M = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__wb_result_W = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__b_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__a_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_mux_in0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__a_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__a_mux_in0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__add_mux_output = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__tinyrv2__DOT__rs1_str = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__tinyrv2__DOT__rs2_str = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__tinyrv2__DOT__rd_str = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(72, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__tinyrv2__DOT__csr_str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__tinyrv2__DOT__funct_str = VL_RAND_RESET_I(16);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__tinyrv2__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__tinyrv2__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__tinyrv2__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__tinyrv2__DOT__csr = VL_RAND_RESET_I(12);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__tinyrv2__DOT__funct = VL_RAND_RESET_I(7);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_reqstream_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_reqstream_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_respstream_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_respstream_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(78, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_respstream_drop_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(78, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_reqstream_enq_msg);
    VL_RAND_RESET_W(78, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT____Vcellout__dmem_queue__deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__reg_en_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__op1_sel_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__op2_sel_D = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__csrr_sel_D = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imm_type_D = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__op1_byp_sel_D = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__op2_byp_sel_D = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ex_result_sel_X = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__alu_fn_X = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__wb_result_sel_M = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__rf_waddr_W = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__rf_wen_W = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imul_req_rdy_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imul_req_val_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imul_resp_rdy_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imul_resp_val_X = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(78, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(78, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__val_F = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__val_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__val_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__val_M = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__val_W = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__ostall_W = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__stall_F = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__stall_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__stall_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__stall_M = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__stall_W = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__osquash_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__squash_F = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__squash_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__pc_redirect_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__pc_sel_X = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__rs1_en_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__rs2_en_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__wb_result_sel_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__csrr_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__csrw_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__proc2mngr_val_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__mngr2proc_rdy_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__inst_X = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_X = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__wb_result_sel_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_X = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__proc2mngr_val_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__br_type_X = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__next_val_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__inst_M = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_M = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_M = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_M = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__proc2mngr_val_M = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__next_val_M = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__inst_W = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__proc2mngr_val_W = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_pending_W = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_7 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_8 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_11 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_14 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_15 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_17 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_22 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_23 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__pc_F = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__pc_next_F = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__br_target_X = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__jal_target_D = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__dmem_write_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__alu_result_X = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__pc_D = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imm_D = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op2_D = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__pc_reg_X_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op1_sel_mux_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op2_byp_out_D = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op1_X = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op2_X = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__ex_result_X = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul_resp_msg = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__ex_result_M = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__wb_result_M = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__wb_result_W = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__b_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__a_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_mux_in0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__a_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__a_mux_in0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__add_mux_output = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__tinyrv2__DOT__rs1_str = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__tinyrv2__DOT__rs2_str = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__tinyrv2__DOT__rd_str = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(72, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__tinyrv2__DOT__csr_str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__tinyrv2__DOT__funct_str = VL_RAND_RESET_I(16);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__tinyrv2__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__tinyrv2__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__tinyrv2__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__tinyrv2__DOT__csr = VL_RAND_RESET_I(12);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__tinyrv2__DOT__funct = VL_RAND_RESET_I(7);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_reqstream_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_reqstream_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_respstream_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_respstream_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(78, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_respstream_drop_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(78, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_reqstream_enq_msg);
    VL_RAND_RESET_W(78, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT____Vcellout__dmem_queue__deq_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__reg_en_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__op1_sel_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__op2_sel_D = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__csrr_sel_D = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imm_type_D = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__op1_byp_sel_D = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__op2_byp_sel_D = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ex_result_sel_X = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__alu_fn_X = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__wb_result_sel_M = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__rf_waddr_W = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__rf_wen_W = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imul_req_rdy_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imul_req_val_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imul_resp_rdy_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imul_resp_val_X = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(78, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(78, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__val_F = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__val_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__val_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__val_M = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__val_W = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__ostall_W = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__stall_F = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__stall_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__stall_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__stall_M = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__stall_W = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__osquash_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__squash_F = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__squash_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__pc_redirect_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__pc_sel_X = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__rs1_en_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__rs2_en_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__wb_result_sel_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__csrr_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__csrw_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__proc2mngr_val_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__mngr2proc_rdy_D = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__inst_X = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_X = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__wb_result_sel_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_X = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__proc2mngr_val_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__br_type_X = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__next_val_X = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__inst_M = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_M = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_M = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_M = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__proc2mngr_val_M = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__next_val_M = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__inst_W = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__proc2mngr_val_W = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_pending_W = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_7 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_8 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_11 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_14 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_15 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_17 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_22 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_23 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__pc_F = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__pc_next_F = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__br_target_X = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__jal_target_D = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__dmem_write_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__alu_result_X = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__pc_D = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imm_D = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op2_D = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__pc_reg_X_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op1_sel_mux_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op2_byp_out_D = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op1_X = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op2_X = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__ex_result_X = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul_resp_msg = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__ex_result_M = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__wb_result_M = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__wb_result_W = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__b_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__a_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_mux_in0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__a_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__a_mux_in0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__add_mux_output = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__tinyrv2__DOT__rs1_str = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__tinyrv2__DOT__rs2_str = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__tinyrv2__DOT__rd_str = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(72, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__tinyrv2__DOT__csr_str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__tinyrv2__DOT__funct_str = VL_RAND_RESET_I(16);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__tinyrv2__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__tinyrv2__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__tinyrv2__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__tinyrv2__DOT__csr = VL_RAND_RESET_I(12);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__tinyrv2__DOT__funct = VL_RAND_RESET_I(7);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_reqstream_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_reqstream_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_respstream_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_respstream_trace__DOT__str);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->__VdfgRegularize_hd87f99a1_0_1 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_2 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_3 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_4 = VL_RAND_RESET_I(1);
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__cs__4144__cs_cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__cs__4210__cs_cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__cs__4276__cs_cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__cs__4342__cs_cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__cs__4408__cs_cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__cs__4474__cs_cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__cs__4540__cs_cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__cs__4606__cs_cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
}
