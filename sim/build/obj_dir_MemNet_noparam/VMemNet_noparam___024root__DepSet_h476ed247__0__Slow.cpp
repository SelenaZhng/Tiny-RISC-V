// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMemNet_noparam.h for the primary calling header

#include "VMemNet_noparam__pch.h"
#include "VMemNet_noparam___024root.h"

VL_ATTR_COLD void VMemNet_noparam___024root___eval_static__TOP(VMemNet_noparam___024root* vlSelf);

VL_ATTR_COLD void VMemNet_noparam___024root___eval_static(VMemNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root___eval_static\n"); );
    // Body
    VMemNet_noparam___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void VMemNet_noparam___024root___eval_static__TOP(VMemNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root___eval_static__TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__sunit0__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__sunit1__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__sunit2__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__sunit2__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__sunit0__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__sunit1__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__sunit2__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__sunit2__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__sunit0__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__sunit1__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__sunit2__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__sunit2__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0;
    // Body
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__sunit0__DOT__num_reqs = 0U;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__sunit1__DOT__num_reqs = 0U;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__sunit2__DOT__num_reqs = 0U;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__num_reqs = 0U;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__num_reqs = 0U;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__num_reqs = 0U;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs = 0U;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs = 0U;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs = 0U;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0U;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0U;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0U;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__sunit0__DOT__num_reqs = 0U;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__sunit1__DOT__num_reqs = 0U;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__sunit2__DOT__num_reqs = 0U;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__sunit0__DOT__num_reqs = 0U;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__sunit1__DOT__num_reqs = 0U;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__sunit2__DOT__num_reqs = 0U;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs = 0U;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs = 0U;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs = 0U;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0U;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0U;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0U;
}

VL_ATTR_COLD void VMemNet_noparam___024root___eval_initial__TOP(VMemNet_noparam___024root* vlSelf);

VL_ATTR_COLD void VMemNet_noparam___024root___eval_initial(VMemNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root___eval_initial\n"); );
    // Body
    VMemNet_noparam___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void VMemNet_noparam___024root___eval_initial__TOP(VMemNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_rdy[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_rdy[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_rdy[3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg[1U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg[1U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg[1U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg[1U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg[1U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg[2U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg[2U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg[2U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg[2U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg[2U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg[3U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg[3U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg[3U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg[3U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg[3U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_val[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_val[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_val[3U] = 0U;
}

VL_ATTR_COLD void VMemNet_noparam___024root___eval_final(VMemNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMemNet_noparam___024root___dump_triggers__stl(VMemNet_noparam___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VMemNet_noparam___024root___eval_phase__stl(VMemNet_noparam___024root* vlSelf);

VL_ATTR_COLD void VMemNet_noparam___024root___eval_settle(VMemNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root___eval_settle\n"); );
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
            VMemNet_noparam___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("lab4_sys/MemNet.v", 231, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VMemNet_noparam___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMemNet_noparam___024root___dump_triggers__stl(VMemNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMemNet_noparam___024root___stl_sequent__TOP__0(VMemNet_noparam___024root* vlSelf);

VL_ATTR_COLD void VMemNet_noparam___024root___eval_stl(VMemNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VMemNet_noparam___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VMemNet_noparam___024root___stl_sequent__TOP__0(VMemNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMemNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<6>/*175:0*/ MemNet_noparam__DOT____Vcellout__v__net2mem_reqstream_msg;
    VL_ZERO_W(176, MemNet_noparam__DOT____Vcellout__v__net2mem_reqstream_msg);
    VlWide<5>/*145:0*/ MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__0__KET____DOT__netmsg2memresp__ostream_msg;
    VL_ZERO_W(146, MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__0__KET____DOT__netmsg2memresp__ostream_msg);
    VlWide<5>/*145:0*/ MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg;
    VL_ZERO_W(146, MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg);
    VlWide<5>/*145:0*/ MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg;
    VL_ZERO_W(146, MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg);
    VlWide<5>/*145:0*/ MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg;
    VL_ZERO_W(146, MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg);
    VlWide<6>/*187:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg;
    VL_ZERO_W(188, MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg);
    VlWide<6>/*187:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg;
    VL_ZERO_W(188, MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg);
    VlWide<6>/*187:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg;
    VL_ZERO_W(188, MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg);
    CData/*0:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    VlWide<6>/*187:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg;
    VL_ZERO_W(188, MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg);
    VlWide<6>/*187:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg;
    VL_ZERO_W(188, MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg);
    VlWide<6>/*187:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg;
    VL_ZERO_W(188, MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg);
    CData/*0:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    VlWide<6>/*187:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg;
    VL_ZERO_W(188, MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg);
    VlWide<6>/*187:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg;
    VL_ZERO_W(188, MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg);
    VlWide<6>/*187:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg;
    VL_ZERO_W(188, MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg);
    CData/*0:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    VlWide<6>/*187:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg;
    VL_ZERO_W(188, MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg);
    VlWide<6>/*187:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg;
    VL_ZERO_W(188, MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg);
    VlWide<6>/*187:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg;
    VL_ZERO_W(188, MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg);
    CData/*0:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    VlWide<5>/*157:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg;
    VL_ZERO_W(158, MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg);
    VlWide<5>/*157:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg;
    VL_ZERO_W(158, MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg);
    VlWide<5>/*157:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg;
    VL_ZERO_W(158, MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg);
    CData/*0:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    VlWide<5>/*157:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg;
    VL_ZERO_W(158, MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg);
    VlWide<5>/*157:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg;
    VL_ZERO_W(158, MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg);
    VlWide<5>/*157:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg;
    VL_ZERO_W(158, MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg);
    CData/*0:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    VlWide<5>/*157:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg;
    VL_ZERO_W(158, MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg);
    VlWide<5>/*157:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg;
    VL_ZERO_W(158, MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg);
    VlWide<5>/*157:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg;
    VL_ZERO_W(158, MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg);
    CData/*0:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    VlWide<5>/*157:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg;
    VL_ZERO_W(158, MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg);
    VlWide<5>/*157:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg;
    VL_ZERO_W(158, MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg);
    VlWide<5>/*157:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg;
    VL_ZERO_W(158, MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg);
    CData/*0:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    // Body
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg[0U][0U] 
        = vlSelf->net2mem_respstream_msg[0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg[0U][1U] 
        = vlSelf->net2mem_respstream_msg[1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg[0U][2U] 
        = vlSelf->net2mem_respstream_msg[2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg[0U][3U] 
        = vlSelf->net2mem_respstream_msg[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg[0U][4U] 
        = ((0x30000000U & (vlSelf->net2mem_respstream_msg[4U] 
                           << 0x12U)) | ((0xc000000U 
                                          & (vlSelf->net2mem_respstream_msg[4U] 
                                             << 0xeU)) 
                                         | vlSelf->net2mem_respstream_msg[4U]));
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg[0U][0U] 
        = vlSelf->cache2net_reqstream_msg[0U][0U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg[0U][1U] 
        = vlSelf->cache2net_reqstream_msg[0U][1U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg[0U][2U] 
        = vlSelf->cache2net_reqstream_msg[0U][2U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg[0U][3U] 
        = vlSelf->cache2net_reqstream_msg[0U][3U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg[0U][4U] 
        = vlSelf->cache2net_reqstream_msg[0U][4U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg[0U][5U] 
        = vlSelf->cache2net_reqstream_msg[0U][5U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg[1U][0U] 
        = vlSelf->cache2net_reqstream_msg[1U][0U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg[1U][1U] 
        = vlSelf->cache2net_reqstream_msg[1U][1U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg[1U][2U] 
        = vlSelf->cache2net_reqstream_msg[1U][2U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg[1U][3U] 
        = vlSelf->cache2net_reqstream_msg[1U][3U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg[1U][4U] 
        = vlSelf->cache2net_reqstream_msg[1U][4U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg[1U][5U] 
        = vlSelf->cache2net_reqstream_msg[1U][5U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg[2U][0U] 
        = vlSelf->cache2net_reqstream_msg[2U][0U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg[2U][1U] 
        = vlSelf->cache2net_reqstream_msg[2U][1U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg[2U][2U] 
        = vlSelf->cache2net_reqstream_msg[2U][2U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg[2U][3U] 
        = vlSelf->cache2net_reqstream_msg[2U][3U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg[2U][4U] 
        = vlSelf->cache2net_reqstream_msg[2U][4U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg[2U][5U] 
        = vlSelf->cache2net_reqstream_msg[2U][5U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg[3U][0U] 
        = vlSelf->cache2net_reqstream_msg[3U][0U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg[3U][1U] 
        = vlSelf->cache2net_reqstream_msg[3U][1U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg[3U][2U] 
        = vlSelf->cache2net_reqstream_msg[3U][2U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg[3U][3U] 
        = vlSelf->cache2net_reqstream_msg[3U][3U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg[3U][4U] 
        = vlSelf->cache2net_reqstream_msg[3U][4U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg[3U][5U] 
        = vlSelf->cache2net_reqstream_msg[3U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_val[0U] 
        = vlSelf->net2mem_respstream_val;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg[4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg[4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg[4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg[4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg[4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg[4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg[4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg[4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg[4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg[4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg[4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg[4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_val[0U] 
        = vlSelf->cache2net_reqstream_val[0U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_val[1U] 
        = vlSelf->cache2net_reqstream_val[1U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_val[2U] 
        = vlSelf->cache2net_reqstream_val[2U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_val[3U] 
        = vlSelf->cache2net_reqstream_val[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_rdy[0U] 
        = vlSelf->net2mem_reqstream_rdy;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U] 
                     >> 0x10U));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U] 
                     >> 0x10U));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U] 
                     >> 0x10U));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U] 
                     >> 0x10U));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U] 
                     >> 0x10U));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U] 
                     >> 0x10U));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U] 
                     >> 0x10U));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U] 
                     >> 0x10U));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U] 
                     >> 0x10U));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U] 
                     >> 0x10U));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U] 
                     >> 0x10U));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U] 
                     >> 0x10U));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U] 
                     >> 0x12U));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U] 
                     >> 0x12U));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U] 
                     >> 0x12U));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U] 
                     >> 0x12U));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U] 
                     >> 0x12U));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U] 
                     >> 0x12U));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U] 
                     >> 0x12U));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U] 
                     >> 0x12U));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U] 
                     >> 0x12U));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U] 
                     >> 0x12U));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U] 
                     >> 0x12U));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U] 
                     >> 0x12U));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_respstream_rdy[0U] 
        = vlSelf->cache2net_respstream_rdy[0U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_respstream_rdy[1U] 
        = vlSelf->cache2net_respstream_rdy[1U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_respstream_rdy[2U] 
        = vlSelf->cache2net_respstream_rdy[2U];
    vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_respstream_rdy[3U] 
        = vlSelf->cache2net_respstream_rdy[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg
        [3U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg
        [3U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg
        [3U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg
        [3U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_msg
        [3U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg[0U][5U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg
        [0U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg[1U][5U] 
        = (0x4000000U | vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg
           [1U][5U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg[2U][5U] 
        = (0x8000000U | vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg
           [2U][5U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg[3U][0U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg
        [3U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg[3U][1U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg
        [3U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg[3U][2U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg
        [3U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg[3U][3U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg
        [3U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg[3U][4U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg
        [3U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg[3U][5U] 
        = (0xc000000U | vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_msg
           [3U][5U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_val
        [3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_val[0U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_val[1U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_val[2U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_val[3U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_reqstream_val
        [3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_rdy
        [3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_rdy[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_rdy[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_rdy[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inq0_num_free_entries 
        = ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[2U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[2U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[2U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[2U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[2U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[2U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_val[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_val[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_val[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inq1_num_free_entries 
        = ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[2U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[2U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[2U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[2U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[2U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[2U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_val[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_val[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_val[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inq2_num_free_entries 
        = ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[2U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[2U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[2U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[2U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[2U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[2U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_val[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_val[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_val[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inq0_num_free_entries 
        = ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[2U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[2U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[2U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[2U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[2U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[2U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_val[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_val[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_val[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inq1_num_free_entries 
        = ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[2U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[2U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[2U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[2U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[2U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[2U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_val[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_val[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_val[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inq2_num_free_entries 
        = ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[2U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[2U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[2U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[2U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[2U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[2U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_val[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_val[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_val[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inq0_num_free_entries 
        = ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[2U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[2U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[2U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[2U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[2U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[2U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_val[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_val[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_val[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inq1_num_free_entries 
        = ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[2U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[2U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[2U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[2U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[2U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[2U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_val[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_val[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_val[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inq2_num_free_entries 
        = ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[2U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[2U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[2U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[2U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[2U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[2U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_val[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_val[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_val[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inq0_num_free_entries 
        = ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[2U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[2U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[2U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[2U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[2U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[2U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_val[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_val[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_val[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inq1_num_free_entries 
        = ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[2U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[2U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[2U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[2U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[2U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[2U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_val[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_val[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_val[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inq2_num_free_entries 
        = ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[2U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[2U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[2U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[2U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[2U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[2U][5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_val[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_val[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_val[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_rdy[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_rdy[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_rdy[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inq0_num_free_entries 
        = ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[2U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[2U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[2U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[2U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[2U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_val[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_val[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_val[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inq1_num_free_entries 
        = ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[2U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[2U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[2U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[2U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[2U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_val[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_val[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_val[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inq2_num_free_entries 
        = ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[2U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[2U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[2U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[2U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[2U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_val[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_val[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_val[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inq0_num_free_entries 
        = ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[2U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[2U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[2U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[2U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[2U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_val[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_val[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_val[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inq1_num_free_entries 
        = ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[2U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[2U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[2U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[2U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[2U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_val[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_val[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_val[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inq2_num_free_entries 
        = ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[2U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[2U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[2U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[2U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[2U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_val[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_val[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_val[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inq0_num_free_entries 
        = ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[2U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[2U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[2U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[2U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[2U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_val[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_val[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_val[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inq1_num_free_entries 
        = ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[2U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[2U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[2U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[2U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[2U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_val[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_val[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_val[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inq2_num_free_entries 
        = ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[2U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[2U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[2U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[2U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[2U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_val[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_val[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_val[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inq0_num_free_entries 
        = ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[2U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[2U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[2U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[2U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[2U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_val[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_val[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_val[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inq1_num_free_entries 
        = ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[2U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[2U][1U] = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((0U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][0U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][1U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][2U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][3U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][4U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][5U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[5U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_val[0U] = 1U;
        } else {
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][0U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][1U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][2U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][3U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][4U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][5U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[5U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_val[1U] = 1U;
        }
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[2U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[2U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[2U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_val[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_val[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_val[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inq2_num_free_entries 
        = ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[2U][0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[2U][1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[2U][2U] = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((0U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][0U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][1U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][2U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][3U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][4U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][5U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[5U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_val[0U] = 1U;
        } else {
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][0U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][1U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][2U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][3U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][4U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][5U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[5U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_val[1U] = 1U;
        }
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[2U][3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[2U][4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_val[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_val[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_val[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_respstream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_respstream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_respstream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_rdy[3U] 
        = vlSelf->MemNet_noparam__DOT____Vcellinp__v__cache2net_respstream_rdy
        [3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[0U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg
        [0U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg
        [1U][4U];
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((0U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][0U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][1U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][2U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][3U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][4U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][5U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[5U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_val[0U] = 1U;
        } else {
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][0U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][1U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][2U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][3U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][4U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][5U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[5U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_val[1U] = 1U;
        }
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[0U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg
        [1U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[0U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg
        [2U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg
        [3U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg
        [3U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg
        [3U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg
        [3U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg
        [3U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[0U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_msg
        [3U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_val
        [3U];
    vlSelf->net2mem_respstream_rdy = vlSelf->MemNet_noparam__DOT__v__DOT__memresp2netmsg_ostream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_rdy
        [3U];
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((1U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][0U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][1U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][2U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][3U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][4U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][5U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[5U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_val[0U] = 1U;
        } else {
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][0U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][1U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][2U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][3U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][4U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][5U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[5U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_val[1U] = 1U;
        }
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_rdy
        [3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[0U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [0U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[0U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [1U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[0U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [2U][5U];
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((1U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][0U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][1U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][2U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][3U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][4U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][5U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[5U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_val[0U] = 1U;
        } else {
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][0U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][1U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][2U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][3U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][4U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][5U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[5U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_val[1U] = 1U;
        }
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[1U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [0U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[1U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [1U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[1U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [2U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_val
        [0U];
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((1U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][0U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][1U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][2U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][3U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][4U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][5U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[5U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_val[0U] = 1U;
        } else {
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][0U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][1U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][2U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][3U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][4U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][5U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[5U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_val[1U] = 1U;
        }
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[2U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [0U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[2U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [1U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[2U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [2U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_val
        [1U];
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((2U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][0U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][1U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][2U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][3U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][4U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][5U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[5U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_val[0U] = 1U;
        } else {
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][0U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][1U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][2U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][3U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][4U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][5U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[5U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_val[1U] = 1U;
        }
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[0U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [0U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[0U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [1U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[0U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [2U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((2U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][0U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][1U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][2U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][3U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][4U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][5U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[5U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_val[0U] = 1U;
        } else {
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][0U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][1U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][2U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][3U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][4U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][5U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[5U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_val[1U] = 1U;
        }
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[1U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [0U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[1U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [1U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[1U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [2U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [0U][0U];
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((2U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][0U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][1U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][2U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][3U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][4U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][5U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[5U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_val[0U] = 1U;
        } else {
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][0U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][1U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][2U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][3U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][4U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][5U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[5U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_val[1U] = 1U;
        }
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[2U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [0U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[2U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [1U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[2U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [2U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [0U][1U];
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((3U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][0U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][1U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][2U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][3U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][4U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][5U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[5U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_val[0U] = 1U;
        } else {
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][0U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][1U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][2U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][3U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][4U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][5U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[5U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_val[1U] = 1U;
        }
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[0U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [0U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[0U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [1U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[0U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [2U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [0U][2U];
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((3U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][0U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][1U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][2U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][3U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][4U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][5U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[5U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_val[0U] = 1U;
        } else {
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][0U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][1U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][2U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][3U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][4U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][5U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[5U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_val[1U] = 1U;
        }
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[1U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [0U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[1U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [1U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[1U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [2U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [0U][3U];
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((3U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][0U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][1U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][2U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][3U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][4U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][5U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[5U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_val[0U] = 1U;
        } else {
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][0U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][1U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][2U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][3U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][4U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][5U] 
                = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[5U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_val[1U] = 1U;
        }
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[2U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [0U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[2U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [1U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[2U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [2U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[0U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [0U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[0U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [1U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [2U][1U];
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((0U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][0U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][1U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][2U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][3U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][4U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_val[0U] = 1U;
        } else {
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][0U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][1U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][2U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][3U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][4U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_val[1U] = 1U;
        }
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[0U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [2U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[1U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [0U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[1U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [1U][5U];
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((0U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][0U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][1U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][2U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][3U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][4U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_val[0U] = 1U;
        } else {
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][0U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][1U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][2U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][3U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][4U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_val[1U] = 1U;
        }
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[1U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [2U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[2U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [0U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [1U][3U];
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((0U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][0U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][1U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][2U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][3U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][4U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_val[0U] = 1U;
        } else {
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][0U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][1U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][2U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][3U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][4U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_val[1U] = 1U;
        }
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[2U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [1U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[2U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [2U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_reqstream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_reqstream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_reqstream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_reqstream_rdy[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreq2netmsg_ostream_rdy
        [3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_rdy
        [3U];
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((1U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][0U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][1U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][2U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][3U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][4U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_val[0U] = 1U;
        } else {
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][0U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][1U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][2U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][3U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][4U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_val[1U] = 1U;
        }
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_rdy
        [3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg
        [2U][4U];
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((1U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][0U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][1U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][2U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][3U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][4U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_val[0U] = 1U;
        } else {
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][0U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][1U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][2U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][3U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][4U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_val[1U] = 1U;
        }
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_val
        [0U];
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((1U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][0U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][1U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][2U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][3U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][4U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_val[0U] = 1U;
        } else {
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][0U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][1U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][2U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][3U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][4U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_val[1U] = 1U;
        }
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_val
        [1U];
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((2U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][0U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][1U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][2U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][3U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][4U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_val[0U] = 1U;
        } else {
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][0U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][1U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][2U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][3U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][4U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_val[1U] = 1U;
        }
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((2U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][0U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][1U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][2U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][3U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][4U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_val[0U] = 1U;
        } else {
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][0U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][1U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][2U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][3U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][4U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_val[1U] = 1U;
        }
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg
        [0U][0U];
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((2U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][0U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][1U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][2U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][3U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][4U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_val[0U] = 1U;
        } else {
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][0U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][1U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][2U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][3U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][4U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_val[1U] = 1U;
        }
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg
        [0U][1U];
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((3U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][0U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][1U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][2U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][3U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][4U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_val[0U] = 1U;
        } else {
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][0U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][1U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][2U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][3U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][4U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_val[1U] = 1U;
        }
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg
        [0U][4U];
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((3U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][0U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][1U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][2U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][3U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][4U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_val[0U] = 1U;
        } else {
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][0U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][1U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][2U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][3U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][4U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_val[1U] = 1U;
        }
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg
        [1U][2U];
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((3U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][0U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][1U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][2U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][3U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][4U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_val[0U] = 1U;
        } else {
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][0U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg[0U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][1U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg[1U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][2U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg[2U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][3U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg[3U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][4U] 
                = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg[4U];
            vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_val[1U] = 1U;
        }
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_rdy
        [3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[5U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = 0U;
    vlSelf->cache2net_reqstream_rdy[0U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_reqstream_rdy
        [0U];
    vlSelf->cache2net_reqstream_rdy[1U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_reqstream_rdy
        [1U];
    vlSelf->cache2net_reqstream_rdy[2U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_reqstream_rdy
        [2U];
    vlSelf->cache2net_reqstream_rdy[3U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_reqstream_rdy
        [3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [1U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [1U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [1U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [1U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [1U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [1U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [2U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [2U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [2U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [2U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [2U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [2U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [0U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [0U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [0U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [0U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [0U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [0U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [1U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [1U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [1U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [1U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [1U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [1U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [2U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [2U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [2U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [2U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [2U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [2U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [0U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [0U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [0U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [0U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [0U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [0U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [1U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [1U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [1U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [1U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [1U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [1U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [2U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [2U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [2U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [2U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [2U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [2U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [0U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [0U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [0U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [0U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [0U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [0U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [1U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [1U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [1U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [1U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [1U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [1U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [2U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [2U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [2U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [2U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [2U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [2U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [0U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [0U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [0U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [0U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [0U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [0U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [1U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [1U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [1U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [1U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [1U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [1U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [2U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [2U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [2U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [2U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [2U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [2U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [0U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [0U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [0U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [0U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [0U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [0U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [1U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [1U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [1U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [1U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [1U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [1U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [2U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [2U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [2U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [2U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [2U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [2U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [0U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [0U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [0U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [0U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [0U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [0U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [1U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [1U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [1U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [1U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [1U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [1U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [2U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [2U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [2U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [2U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [2U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [2U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [0U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [0U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [0U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [0U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [0U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [0U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [1U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [1U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [1U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [1U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [1U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [1U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [2U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [2U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [2U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [2U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [2U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [2U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [0U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [0U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [0U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [0U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [0U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [0U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [1U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [1U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [1U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [1U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [1U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [1U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [2U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [2U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [2U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [2U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [2U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [2U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [0U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [0U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [0U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [0U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [0U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [0U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [1U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [1U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [1U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [1U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [1U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [1U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [2U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [2U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [2U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [2U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [2U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [2U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [0U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [0U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [0U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [0U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [0U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [0U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [1U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [1U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [1U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [1U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [1U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [1U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [2U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [2U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [2U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [2U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [2U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [2U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [0U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [0U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [0U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [0U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [0U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [0U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [1U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [1U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [1U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [1U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [1U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [1U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [2U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [2U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [2U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [2U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [2U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [2U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [0U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [0U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [0U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [0U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [0U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[5U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [0U][5U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[2U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[3U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[4U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [1U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [1U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [1U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [1U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [1U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [2U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [2U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [2U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [2U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [2U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [0U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [0U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [0U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [0U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [0U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [1U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [1U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [1U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [1U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [1U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [2U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [2U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [2U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [2U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [2U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [0U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [0U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [0U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [0U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [0U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [1U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [1U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [1U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [1U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [1U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [2U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [2U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [2U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [2U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [2U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [0U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [0U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [0U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [0U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [0U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [1U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [1U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [1U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [1U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [1U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [2U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [2U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [2U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [2U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [2U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [0U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [0U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [0U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [0U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [0U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [1U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [1U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [1U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [1U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [1U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [2U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [2U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [2U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [2U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [2U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [0U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [0U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [0U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [0U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [0U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [1U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [1U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [1U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [1U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [1U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [2U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [2U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [2U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [2U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [2U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [0U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [0U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [0U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [0U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [0U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [1U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [1U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [1U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [1U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [1U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [2U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [2U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [2U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [2U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [2U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [0U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [0U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [0U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [0U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [0U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [1U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [1U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [1U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [1U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [1U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [2U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [2U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [2U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [2U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [2U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [0U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [0U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [0U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [0U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [0U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [1U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [1U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [1U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [1U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [1U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [2U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [2U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [2U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [2U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [2U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [0U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [0U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [0U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [0U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [0U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [1U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [1U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [1U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [1U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [1U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [2U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [2U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [2U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [2U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [2U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [0U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [0U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [0U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [0U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [0U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [1U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [1U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [1U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [1U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [1U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [2U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [2U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [2U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [2U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [2U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [0U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [0U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [0U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [0U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [0U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [1U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [1U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [1U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [1U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [1U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [2U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [2U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [2U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [2U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [2U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    } else if (vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [0U][0U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [0U][1U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [0U][2U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[3U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [0U][3U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[4U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [0U][4U];
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg[0U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg[1U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg[2U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg[0U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg[1U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg[2U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg[0U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg[1U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg[2U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg[0U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg[1U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg[2U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg[0U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [0U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg[0U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [1U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg[3U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg[3U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg[3U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg[3U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg[3U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg[3U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [2U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_val[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router0__ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg[1U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [0U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg[1U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [1U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg[0U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [2U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router1__ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg[2U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [0U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg[2U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [1U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg[1U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [2U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router2__ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg[3U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg[3U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg[3U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg[3U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg[3U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg[3U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [0U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg[3U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg[3U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg[3U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg[3U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg[3U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg[3U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [1U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg[2U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [2U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_val[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_val[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellout__router3__ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg[3U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg[3U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg[3U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg[3U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg[3U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_val[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router0__ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg[0U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg[0U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg[0U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg[0U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg[0U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router1__ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router2__ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg[3U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg[3U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg[3U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg[3U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg[3U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg[3U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg[3U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg[3U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg[3U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg[3U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_val[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_val[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellout__router3__ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    MemNet_noparam__DOT____Vcellout__v__net2mem_reqstream_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg
        [0U][0U];
    MemNet_noparam__DOT____Vcellout__v__net2mem_reqstream_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg
        [0U][1U];
    MemNet_noparam__DOT____Vcellout__v__net2mem_reqstream_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg
        [0U][2U];
    MemNet_noparam__DOT____Vcellout__v__net2mem_reqstream_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg
        [0U][3U];
    MemNet_noparam__DOT____Vcellout__v__net2mem_reqstream_msg[4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg
        [0U][4U];
    MemNet_noparam__DOT____Vcellout__v__net2mem_reqstream_msg[5U] 
        = (0xffffU & vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg
           [0U][5U]);
    MemNet_noparam__DOT____Vcellout__v__net2mem_reqstream_msg[5U] 
        = ((0xf0ffU & MemNet_noparam__DOT____Vcellout__v__net2mem_reqstream_msg[5U]) 
           | (0xf00U & (vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_msg
                        [0U][5U] >> 0x10U)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
        [3U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
        [3U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
        [3U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
        [3U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
        [3U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[1U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
        [3U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[1U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
        [0U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[1U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
        [1U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[1U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
        [2U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[2U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
        [0U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[2U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
        [1U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[2U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
        [2U][5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
        [3U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
        [3U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
        [3U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
        [3U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
        [3U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[2U][5U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
        [3U][5U];
    vlSelf->net2mem_reqstream_val = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_val
        [3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_val
        [3U];
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_rdy));
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_rdy));
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_rdy));
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_rdy));
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_rdy));
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_rdy));
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_rdy));
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_rdy));
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_rdy));
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_rdy));
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_rdy));
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_rdy));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg
        [3U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg
        [3U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg
        [3U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg
        [3U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg
        [3U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[1U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[1U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[1U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[1U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[1U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg
        [0U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg
        [0U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg
        [0U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg
        [0U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg
        [0U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg
        [1U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg
        [1U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg
        [1U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg
        [1U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg
        [1U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg
        [2U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg
        [2U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg
        [2U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg
        [2U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg
        [2U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[2U][0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg
        [3U][0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[2U][1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg
        [3U][1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[2U][2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg
        [3U][2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[2U][3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg
        [3U][3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[2U][4U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_msg
        [3U][4U];
    MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__0__KET____DOT__netmsg2memresp__ostream_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg
        [0U][0U];
    MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__0__KET____DOT__netmsg2memresp__ostream_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg
        [0U][1U];
    MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__0__KET____DOT__netmsg2memresp__ostream_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg
        [0U][2U];
    MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__0__KET____DOT__netmsg2memresp__ostream_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg
        [0U][3U];
    MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__0__KET____DOT__netmsg2memresp__ostream_msg[4U] 
        = (0x3ffffU & vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg
           [0U][4U]);
    MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__0__KET____DOT__netmsg2memresp__ostream_msg[4U] 
        = (0x3c3ffU & MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__0__KET____DOT__netmsg2memresp__ostream_msg[4U]);
    MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg
        [1U][0U];
    MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg
        [1U][1U];
    MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg
        [1U][2U];
    MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg
        [1U][3U];
    MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg[4U] 
        = (0x3ffffU & vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg
           [1U][4U]);
    MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg[4U] 
        = (0x3c3ffU & MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg[4U]);
    MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg
        [2U][0U];
    MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg
        [2U][1U];
    MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg
        [2U][2U];
    MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg
        [2U][3U];
    MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg[4U] 
        = (0x3ffffU & vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg
           [2U][4U]);
    MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg[4U] 
        = (0x3c3ffU & MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg[4U]);
    MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg
        [3U][0U];
    MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg
        [3U][1U];
    MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg
        [3U][2U];
    MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg
        [3U][3U];
    MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg[4U] 
        = (0x3ffffU & vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_msg
           [3U][4U]);
    MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg[4U] 
        = (0x3c3ffU & MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg[4U]);
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_val[0U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_val
        [0U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_val
        [1U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_val
        [2U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_val[3U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet_ostream_val
        [3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_val
        [3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__istream_val[1U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_val
        [0U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_val
        [1U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_val
        [2U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__istream_val[2U] 
        = vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_ccw_val
        [3U];
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_rdy));
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_rdy));
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_rdy));
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_rdy));
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_rdy));
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_rdy));
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_rdy));
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_rdy));
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_rdy));
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_rdy));
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_rdy));
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_rdy));
    vlSelf->net2mem_reqstream_msg[0U] = MemNet_noparam__DOT____Vcellout__v__net2mem_reqstream_msg[0U];
    vlSelf->net2mem_reqstream_msg[1U] = MemNet_noparam__DOT____Vcellout__v__net2mem_reqstream_msg[1U];
    vlSelf->net2mem_reqstream_msg[2U] = MemNet_noparam__DOT____Vcellout__v__net2mem_reqstream_msg[2U];
    vlSelf->net2mem_reqstream_msg[3U] = MemNet_noparam__DOT____Vcellout__v__net2mem_reqstream_msg[3U];
    vlSelf->net2mem_reqstream_msg[4U] = MemNet_noparam__DOT____Vcellout__v__net2mem_reqstream_msg[4U];
    vlSelf->net2mem_reqstream_msg[5U] = MemNet_noparam__DOT____Vcellout__v__net2mem_reqstream_msg[5U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_val
           [0U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_val
           [1U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router0__istream_val
           [2U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_val
           [0U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_val
           [1U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router1__istream_val
           [2U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_val
           [0U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_val
           [1U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__istream_val
           [2U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_val
           [0U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_val
           [1U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__istream_val
           [2U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg[0U][0U] 
        = MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__0__KET____DOT__netmsg2memresp__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg[0U][1U] 
        = MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__0__KET____DOT__netmsg2memresp__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg[0U][2U] 
        = MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__0__KET____DOT__netmsg2memresp__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg[0U][3U] 
        = MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__0__KET____DOT__netmsg2memresp__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg[0U][4U] 
        = MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__0__KET____DOT__netmsg2memresp__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg[1U][0U] 
        = MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg[1U][1U] 
        = MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg[1U][2U] 
        = MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg[1U][3U] 
        = MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg[1U][4U] 
        = MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg[2U][0U] 
        = MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg[2U][1U] 
        = MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg[2U][2U] 
        = MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg[2U][3U] 
        = MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg[2U][4U] 
        = MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg[4U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg[3U][0U] 
        = MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg[0U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg[3U][1U] 
        = MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg[1U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg[3U][2U] 
        = MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg[2U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg[3U][3U] 
        = MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg[3U];
    vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg[3U][4U] 
        = MemNet_noparam__DOT__v__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg[4U];
    vlSelf->cache2net_respstream_val[0U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_val
        [0U];
    vlSelf->cache2net_respstream_val[1U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_val
        [1U];
    vlSelf->cache2net_respstream_val[2U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_val
        [2U];
    vlSelf->cache2net_respstream_val[3U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_val
        [3U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__istream_val
           [0U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__istream_val
           [1U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router0__istream_val
           [2U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__istream_val
           [0U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__istream_val
           [1U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router1__istream_val
           [2U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__istream_val
           [0U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__istream_val
           [1U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__istream_val
           [2U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__istream_val
           [0U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__istream_val
           [1U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__istream_val
           [2U]);
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->cache2net_respstream_msg[0U][0U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg
        [0U][0U];
    vlSelf->cache2net_respstream_msg[0U][1U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg
        [0U][1U];
    vlSelf->cache2net_respstream_msg[0U][2U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg
        [0U][2U];
    vlSelf->cache2net_respstream_msg[0U][3U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg
        [0U][3U];
    vlSelf->cache2net_respstream_msg[0U][4U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg
        [0U][4U];
    vlSelf->cache2net_respstream_msg[1U][0U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg
        [1U][0U];
    vlSelf->cache2net_respstream_msg[1U][1U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg
        [1U][1U];
    vlSelf->cache2net_respstream_msg[1U][2U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg
        [1U][2U];
    vlSelf->cache2net_respstream_msg[1U][3U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg
        [1U][3U];
    vlSelf->cache2net_respstream_msg[1U][4U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg
        [1U][4U];
    vlSelf->cache2net_respstream_msg[2U][0U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg
        [2U][0U];
    vlSelf->cache2net_respstream_msg[2U][1U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg
        [2U][1U];
    vlSelf->cache2net_respstream_msg[2U][2U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg
        [2U][2U];
    vlSelf->cache2net_respstream_msg[2U][3U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg
        [2U][3U];
    vlSelf->cache2net_respstream_msg[2U][4U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg
        [2U][4U];
    vlSelf->cache2net_respstream_msg[3U][0U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg
        [3U][0U];
    vlSelf->cache2net_respstream_msg[3U][1U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg
        [3U][1U];
    vlSelf->cache2net_respstream_msg[3U][2U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg
        [3U][2U];
    vlSelf->cache2net_respstream_msg[3U][3U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg
        [3U][3U];
    vlSelf->cache2net_respstream_msg[3U][4U] = vlSelf->MemNet_noparam__DOT____Vcellout__v__cache2net_respstream_msg
        [3U][4U];
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
}
